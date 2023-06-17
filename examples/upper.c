#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char str[]     = "string in lowercase changed to uppercase";  // 1

    printf("1: %s\n", cstr_upper(str));

    return 0;
}