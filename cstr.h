/*
        Создано КОДИКЪ 2023/06/12              // Created by CODIC 2023/06/12
        Основная имплементация CSTR (C-String) // Main CSTR (C-String) implementation file

*/

#include <stdlib.h>

#define CSTR_TRUE 1
#define CSTR_FALSE 0

/*
Возвращает длину строки
Returns string length
*/
size_t cstr_len(char *string);

/*
Делает первую букву заглавной
Capitalize string
*/
void cstr_capitalize(char *string);

/*
Возвращает 1, если символ есть в строке, иначе 0
Returns 1 if char in string otherwise 0
*/
short cstr_has(char *string, char character);

/*
Возвращает минимальный индекс символа в строке, если символа нет, возвращает -1
Return the lowest index in string where char is found. If no char, returns -1
*/
long long cstr_find(char *string, char character);

#ifdef CSTR_IMPLEMENTATION

// Возвращает длину строки 
size_t cstr_len(char *string) {
    size_t length = 0;
    while (*string) { string++; length++;}
    
    return length;
}

// Возвращает истину, если символ есть в строке, иначе ложь
short cstr_has(char *string, char character) {
    while (*string) {
        if (*string++ == character) return CSTR_TRUE;
    }

    return CSTR_FALSE;
}

// Возвращает минимальный индекс символа в строке, если символа нет, возвращает -1 
long long cstr_find(char *string, char character) {
    long long i = 0;
    while (*string) {
        if (*string++ == character) return i; else i++;
    }

    return -1;
}

// Делает первую букву заглавной 
void cstr_capitalize(char *string) {
    if (string[0] >= 'a' && string[0] <= 'z') string[0] = string[0] - 32;

    for (size_t i = 1; i < cstr_len(string); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') string[i] = string[i] + 32;
    }
}


#endif