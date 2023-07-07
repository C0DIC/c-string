#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "Return true!";

    printf("1: %d\n", cstr_startswith("Return", string));
    printf("2: %d\n", cstr_startswith("true", string));

    return 0;
}