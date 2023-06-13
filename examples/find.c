#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char *string = "just a string";

    printf("%d\n", (int)cstr_find("abcdefg", 'f'));     // 5
    printf("%lld\n", cstr_find("abcdefg", 'g'));        // 6

    printf("%lld\n", cstr_find(string, 'w'));  // -1

    return 0;
}