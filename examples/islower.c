#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    printf("%d\n", cstr_islower("heeeeeeeeello!"));  // 1
    printf("%d\n", cstr_islower("heeeeeEeeello!"));  // 0

    return 0;
}