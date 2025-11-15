# VERSION 2 INCOMPATIBLE WITH VERSION 1, SEE BELOW

# XxHash_arduino

xxHash hash algorithm library for arduino

- ported by atesin in apr2022: https://gitlab.com/atesin/XxHash_arduino  
- gpl v3 license, or the most compatible with original algorithm
- original xxHash algorithm by Yann Collet: https://cyan4973.github.io/xxHash
- special thanks to Daniel Kirchner: https://github.com/ekpyron

## description

xxHash is a light, fast, good diffusion and cross-platform (C++, PHP, Python, js, Java, etc.) hash algorithm. From version 2 this library has a different API and just provides 32-bit algorithm support for arduino (XXH32) because larger complementary variants are resource consuming and harder to implement

## what's new from version 2.1?

- updated original upstream lib to 43ea6fd (Sep 8 2022)
- some optimizations
- streaming mode available (see included examples)


## instructions

```
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
```

## why the new API for version 2?

I am not so skilled. I needed a light and compatible hash algoritm for arduino and saw [Daniel Kirchner version](https://github.com/ekpyron/xxhashct) easy to implement, it worked more or less when Daniel himself [suggested me](https://github.com/ekpyron/xxhashct/issues/3) to try the [Yann Collet's reference implementation](www.xxhash.com) giving me some hints. My test worked great and simpler (but just XXH32) so i took the chance to optimize the code and release it.

## the long story

I am not a programmer but a sysadmin, all my *experiments* are mainly for my own projects and cost me a lot effort to make it work (so it could have bugs), but i still want to share it with you (you are not obligated so use it at your own responsibility).

I wrote some simple PHP projects that uses hashes heavily to validation and other tasks (mainly SHA1 because its easyness). I was looking for some, light, optimized and easy hash for use between PHP and arduino, there is SHA1 in arduino libraries repository but is huge and heavy, so i started searching for other light hash algos [in wikipedia](https://en.wikipedia.org/wiki/List_of_hash_functions#Non-cryptographic_hash_functions) and selected some like djb2, Fast-Hash, SuperFastHash and xxHash but none of these was in arduino lib repo, so i had to learn how to port it :(.

Until maybe is not the most optimized, i found the easier implementation and better support in xxHash. There are many ports listed in [official website](www.xxhash.com) for many languages and platforms including PHP and C/C++, so i installed a [PHP7 module](https://github.com/Megasaxon/php-xxhash) and worked flawlessly.

For arduino, i found the original Jann Collet lib huge and complicated to my knowledge so i choosed the Daniel Kirchner *single header file* version, it worked good but not so user fiendly. When i tell my intentions to Daniel to port his library to arduino he encourage and helped me to try the original header file. It worked excelent, **with xxhash.h file unchanged**, but XXH64 variant adds complications (arduino doesn't fully support 64-bit integers so workarounds must be made), sketch size and resource consuming. So i disabled it, simplified the API and updated the library.

## 32 bits versus 64 bits

I think a 32-bit hash is sufficient for most arduino projects. With 32 bits you can count up to 4,294,967,296. If you would count 100 numbers each second you would spend almost a year and a half to finish, that is like 1 millimeter in ~4300 Km, the width of whole united states or europe. Moreover the chance to find 2 random input values with same 32-bit hash is waaay much lower.

Complementarily, with 64 bits you can count up to 4,611,686,018,427,387,904, would take 150 centuries counting 1 million numbers each second. That is like 1 milimeter in 2 light years!, imagine to find 2 random cosmic sand grains that hit the same millimiter between the earth and a near star (not the sun! xD), that is absurdly and unnecesarily oversized. So for the size of arduino and its applications i find a 32-bit hash the faster, ligther and perfect choice.
