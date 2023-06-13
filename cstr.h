/*
        Создано КОДИКЪ 2023/06/12              // Created by CODIC 2023/06/12
        Основная имплементация CSTR (C-String) // Main CSTR (C-String) implementation file

*/

#define CSTR_TRUE  1
#define CSTR_FALSE 0
typedef long unsigned int CSTR_INT;

/*
Возвращает длину строки
Returns string length
*/
CSTR_INT cstr_len(char *string);


// Не работает со строками, созданными как указатель (char *name), потому что такие строки неизменяемые
// Don't work with pointers (char *name), because this strings in only-read area
/*
Делает первую букву заглавной
Capitalize string
*/
char *cstr_capitalize(char *string);

/*
Возвращает 1, если символ есть в строке, иначе 0
Returns 1 if char in string, 0 otherwise
*/
short cstr_has(char *string, char character);

/*
Возвращает минимальный индекс символа в строке, если символа нет, возвращает -1
Returns the lowest index in string where char is found. If no char, returns -1
*/
long long cstr_find(char *string, char character);

/*
Возвращает 1, если вся строка в нижнем регистре, иначе 0
Returns 1 if string in lowercase, 0 otherwise
*/
short cstr_islower(char *string);

/*
Возвращает 1, если вся строка в верхнем регистре, иначе 0
Returns 1 if string in uppercase, 0 otherwise
*/
short cstr_isupper(char *string);



#ifdef CSTR_IMPLEMENTATION

// Возвращает длину строки 
CSTR_INT cstr_len(char *string) {
    CSTR_INT length = 0;
    while (*string) { string++; length++;}
    
    return length;
}

// Делает первую букву заглавной 
char *cstr_capitalize(char *string) {
    if (string[0] >= 'a' && string[0] <= 'z') string[0] = string[0] - 32;

    for (CSTR_INT i = 1; i < cstr_len(string); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') string[i] = string[i] + 32;
    }

    return string;
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

// Возвращает 1, если вся строка в верхнем регистре, иначе 0
short cstr_islower(char *string) {
    while (*string) {
        if (*string >= 'A' && *string <= 'Z') return CSTR_FALSE;
        *string++;
    }

    return CSTR_TRUE;
}

// Возвращает 1, если вся строка в верхнем регистре, иначе 0
short cstr_isupper(char *string) {
    while (*string) {
        if (*string >= 'a' && *string <= 'z') return CSTR_FALSE;
        *string++;
    }

    return CSTR_TRUE;
};

#endif