#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char str[]     = "JUST A STRING IN UPPER and LOWERCASE";  // 1

    printf("1: %s\n", cstr_lower(str));

    return 0;
}