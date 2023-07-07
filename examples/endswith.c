#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "Return true!";

    printf("1: %d\n", cstr_endswith("n true!", string));
    printf("2: %d\n", cstr_endswith("true?", string));
    printf("3: %d\n", cstr_endswith("?", string));
    printf("4: %d\n", cstr_endswith("!", string));

    return 0;
}