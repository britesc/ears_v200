/**
xxHash hash algorithm library for arduino

- original xxHash algorithm by Yann Collet: https://cyan4973.github.io/xxHash
- ported by atesin in apr2022: https://gitlab.com/atesin/XxHash_arduino  
- licensed under gpl v3, or the most compatible one with original algorithm
- special thanks to Daniel Kirchner: https://github.com/ekpyron
//*/


#include <XxHash_arduino.h>

void setup(){
  Serial.begin(9600);
  while ( !Serial );
  delay(50);
  Serial.println();

  // ONE-SHOT MODE EXAMPLE

  // create the char buffer before where the hash will be placed,
  // 9 bytes at least or will overflow, XXH32 HAS NO WAY TO CHECK BUFFER SIZE
  char outputHash[9];
  // the same output hash pointer is also returned to be used inline
  Serial.println(xxh32(outputHash, "arduino"));

  // STREAMING MODE EXAMPLE

  // create the xxh32 stream object (be aware each one consumes around 100 bytes)
  Xxh32stream stream;
  // feed with data, there are methods for char* and F() datatypes
  stream.feed("ardu");
  stream.feed(F("ino"));
  // ends the stream and get the hash, this should be the same obtained with one-shot mode above,
  // if some error occurs it will return an empty char array (pointer)
  Serial.println(stream.hash());

  // Xxh32stream objects should be automatically recycled when scope ends,
  // for persistence you could use a wrapper function and pass a reference to char buffer to copy
}

void loop(){}
