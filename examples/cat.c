#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "hello, ";
    char str[]    = "world!";
    char catted[cstr_len(string) + cstr_len(str)];

    cstr_cat(string, str);

    return 0;
}