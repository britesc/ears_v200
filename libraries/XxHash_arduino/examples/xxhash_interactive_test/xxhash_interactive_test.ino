/**
xxHash hash algorithm library for arduino

- ported by atesin in apr2022: https://gitlab.com/atesin/XxHash_arduino  
- gpl v3 license, or the most compatible with original algorithm
- original xxHash algorithm by Yann Collet: https://cyan4973.github.io/xxHash
- special thanks to Daniel Kirchner: https://github.com/ekpyron

description:

xxHash is a light, fast, good diffusion and cross-platform (C++, PHP, Python,
js, Java, etc.) hash algorithm. From version 2 this library has a different API
and just provides 32-bit algorithm support for arduino (XXH32) because larger
complementary variants are resource consuming and harder to implement

instructions:

// include the header file in the global scope at the top of your main sketch

#include <XxHash_arduino.h>

// the xxh32() reentrant function (i.e. that writes the supplied array directly
// to avoid memory leaks and overflows) returns the same char array pointer,
// just be sure the supplied char array for output has at least 9 bytes available
// or fancy overflows could happen, this is the function signature:

static char* xxh32(char* outputHash, const char* inputData);

// if everything goes well char arrays can be easily evaluated later with strcmp(),
// results are uppercase but case can be changed with strlwr() or strupr()

// xxh32() uses the static XXH32() function internally, if you have special needs
// you can also call this function directly, it has this signature:

static XXH32_hash_t XXH32(const void* input, size_t length, XXH32_hash_t seed);

//*/


/** global scope */

#include <XxHash_arduino.h>

char inputBuffer[51] = "";


/** prepare the sketch */
void setup()
{
  // enable serial port
  Serial.begin(9600);
  while ( !Serial );
  delay(50);
  Serial.println();

  // print a little welcome message to serial console
  Serial.println();
  Serial.println(F("XxHash_arduino library test, XXH32 variant"));
  Serial.println(F("https://gitlab.com/atesin/XxHash_Arduino"));
  Serial.println();
  Serial.println(F("type something up to 50 chars in console and press enter"));
  Serial.println(F("can check at https://asecuritysite.com/encryption/smh_xxhash"));
}


/** just for demonstration, not optimized */
void loop()
{
  // go back if no chars in serial console (until next loop)
  if ( !Serial.available() )
    return;

  // chars found, get the first one
  char inputChar[] = " ";
  inputChar[0] = (char) Serial.read();
  
  // skip this useless char and go back (until next loop)
  if ( inputChar[0] == '\r' )
    return;
  
  // process collected string if received char was "enter key"
  // (or if input buffer is full, in which case the input could be splitted)
  if ( inputChar[0] == '\n' || strlen(inputBuffer) > 49 )
  {
    // print the collected string to serial console
    Serial.print(F("> "));
    Serial.println(inputBuffer);
    
    // reserve space to place hash in hex before calculation, then print it in a row
    char resultHash[9];
    Serial.print(F("XXH32 HEX: "));
    Serial.println(xxh32(resultHash, inputBuffer));
    
    // calculate and print the numeric format
    Serial.print(F("XXH32 INT: "));
    // xxh32() uses inline XXH32() internally,
    // so we are actually using XXH32() twice with same data here
    Serial.println(XXH32(inputBuffer, strlen(inputBuffer), 0));
    
    // reset the input buffer and go back (until next loop)
    inputBuffer[0] = '\0';
    return;
  }
  
  // as received char was not "enter key", collect it and go back (until next loop)
  strcat(inputBuffer, inputChar);
}
