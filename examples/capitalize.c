#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    // Works only with correct c-string. Not working with "pointers" (char *string)
    // Работает только с правильными строками, не будет работать, если это будет указатель (char *string)
    char string[] = "heLLo frOm C ProGrammer";

    printf("%s\n", cstr_capitalize(string));

    return 0;
}