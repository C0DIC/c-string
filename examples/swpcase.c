#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "hello, world!";        // 1
    char str[]     = "ThIs iS An eXaMpLe";  // 2

    printf("1: %s\n", cstr_swpcase(string));
    printf("2: %s\n", cstr_swpcase(str));

    return 0;
}