#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "hello, world!";       // 1
    char *str     = "this is an example";  // 2

    printf("1: %d\n", (int)cstr_len(string));
    printf("2: %ld\n", cstr_len(str));
    printf("3: %ld\n", cstr_len("and hello again"));    // 3

    return 0;
}