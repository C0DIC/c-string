#include <stdio.h>

#define CSTR_IMPLEMENTATION
#include "../cstr.h"

int main() {
    char string[] = "hello, world!";
    char str[]    = "hello, world!";

    printf("1: %d\n", cstr_eq(string, str));    // 1

    char big_string[] = "another string but bigger";
    char hello_sp[]   = "hello, world! ";   // hello world with space at the end

    printf("2: %d\n", cstr_eq(string, big_string));  // 2
    printf("3: %d\n", cstr_eq(string, hello_sp));  // 3

    char b_hello_sp[]   = "Hello, world! ";   // hello world with big H

    printf("4: %d\n", cstr_eq(string, b_hello_sp));  // 4

    return 0;
}