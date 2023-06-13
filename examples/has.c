#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    printf("%d\n", cstr_has("abcdef", 'd'));  // 1
    printf("%d\n", cstr_has("abcdef", 'z'));  // 0

    return 0;
}