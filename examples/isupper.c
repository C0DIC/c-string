#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    printf("%d\n", cstr_isupper("HEEEEEEEEELLO!"));  // 1
    printf("%d\n", cstr_islower("HEEEEEEEEELLo!"));  // 0

    return 0;
}