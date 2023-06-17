# C String

[English](README_EN.md) [Русский](README.md)

Independent header-only library for working with strings in C (not finished)

## Pros

- Does not depend on any standard library (completely independent)
- Can replace many standard libraries
- Easy to use
- Clear and concise names

## Quick start

To use this library you need to define `CSTR_IMPLEMENTATION` in `.c` file

``` c
// ...
#define CSTR_IMPLEMENTATION
#include "path/to/cstr.h" // "cstr.h"
// ...
```
