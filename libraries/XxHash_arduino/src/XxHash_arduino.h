/**
xxHash hash algorithm library version 2.1 for arduino

- original xxHash algorithm by Yann Collet: https://cyan4973.github.io/xxHash
- ported by atesin in apr2022: https://gitlab.com/atesin/XxHash_arduino  
- licensed under gpl v3, or the most compatible one with original algorithm
- special thanks to Daniel Kirchner: https://github.com/ekpyron

what's new in this version?

- updated original upstream lib to 43ea6fd (@Sep 8 2022)
- some optimizations
- streaming mode available (see included examples)

description:

xxHash is a light, fast, good diffusion and cross-platform (C++, PHP, Python,
js, Java, etc.) hash algorithm, this is a stripped down implementation
considering arduino hardware constrains and most common use cases. From version
2 this library has a different API and just provides 32-bit algorithm support
for arduino (XXH32) because larger complementary variants are resource
consuming and harder to implement. Later versions implements streaming mode

streaming mode:

with this mode you can create a hash state and be feeding it on the fly with
incremental data, getting the same hash at the end as if you were passed all
the data at once with normal one-shot mode. Be aware each state consumes around
100 bytes while active, and to copy the resulting hash if used outside the scope

instructions:

see the included examples and read the comments

//*/


#ifndef XXHASH_ARDUINO_H
#define XXHASH_ARDUINO_H

// build modifiers: https://github.com/Cyan4973/xxHash#build-modifiers
// include implementations in header file for optimization
#define XXH_INLINE_ALL
// disable HHX3 and XXH64 variants (heavy and unlikely), use just XXH32
#define XXH_NO_XXH3
#define XXH_NO_LONG_LONG

#include "xxhash.h"


/**
this xxh32() reentrant function (i.e. that writes the supplied array directly
to avoid memory leaks and overflows) returns the same char array pointer,
just be sure the supplied char array for output has at least 9 bytes available
(8 data +1 NUL) or fancy overflows could happen
//*/

static char* xxh32(char *outputHash, const char *inputData)
{
  sprintf_P(outputHash, (PGM_P) F("%08lX"), XXH32(inputData, strlen(inputData), 0));
  return outputHash;
}


class Xxh32stream{
  private:
    char outputHash[9];
    XXH32_state_t *state;
    XXH_errorcode errorCode;
  
  
  public:
  
    Xxh32stream(){
      errorCode = (state = XXH32_createState()) == NULL? XXH_ERROR: XXH_OK;
      if ( !errorCode )
        errorCode = XXH32_reset(state, 0);
    }
      
    void feed(const char *inputData){
      if ( !errorCode )
        errorCode = XXH32_update(state, inputData, strlen(inputData));
    }
    
    void feed(const __FlashStringHelper *inputData){
      if ( !errorCode ){
        // for code below i'm wating what happen with: https://github.com/Cyan4973/xxHash/issues/745
        //errorCode = XXH32_update_P(state, (PGM_P) inputData, strlen_P((PGM_P) inputData));
        // slimy workaround in the meanwhile...
        char bufData[17];  // yes, another temporary buffer :/
        bufData[16] = '\0';  // strncpy_P() below doesn't terminate strings
        PGM_P ptrData = (PGM_P) inputData;
        PGM_P endData = ptrData + strlen_P(ptrData);
        while ( ptrData < endData ){  // yes another iteration :/
          strncpy_P(bufData, ptrData, 16);
          feed(bufData);
          ptrData += 16;
        }
      }
    }
      
    char *hash(){
      if ( !errorCode ){
        XXH32_hash_t const hashVal = XXH32_digest(state);
        XXH32_freeState(state);
        // i regret this below instead, because createState() uses malloc and freeState() frees it
        //errorCode = XXH32_reset(state, 0);
        sprintf_P(outputHash, (PGM_P) F("%08lX"), hashVal);
      }
      else
        outputHash[0] = '\0';
      return outputHash;
    }
};

#endif /* XXHASH_ARDUINO_H */
