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
Возвращает строку с обратным регистром для каждого символа
Swaping uppercase to lowercase and vice versa
*/
char *cstr_swpcase(char *string);

/*
Возвращает строку в нижнем регистре
Returns string in lowercase
*/
char *cstr_lower(char *string);

/*
Возвращает строку в верхнем регистре
Returns string in uppercase
*/
char *cstr_upper(char *string);

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
Возвращает 1, если строки совпадают, иначе 0
Returns 1 if strings are the same, 0 otherwise
*/
short cstr_eq(char *string, char *s_string);

/*
Сложение двух строк
Concatenate two strings
*/
void cstr_cat(char *string, char *s_string);

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

// Возвращает строку с обратным регистром для каждого символа
char *cstr_swpcase(char *string) {
    for (CSTR_INT i = 0; i < cstr_len(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') string[i] = string[i] - 32;
        else if (string[i] >= 'A' && string[i] <= 'Z') string[i] = string[i] + 32;
    }

    return string;
}

// Возвращает строку в нижнем регистре
char *cstr_lower(char *string) {
    for (CSTR_INT i = 0; i < cstr_len(string); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') string[i] = string[i] + 32;
    }

    return string;
}

// Возвращает строку в верхнем регистре
char *cstr_upper(char *string) {
    for (CSTR_INT i = 0; i < cstr_len(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') string[i] = string[i] - 32;
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

// Возвращает 1, если строки совпадают, иначе 0
short cstr_eq(char *string, char *s_string) {
    if (cstr_len(string) != cstr_len(s_string)) return CSTR_FALSE;

    for (CSTR_INT i = 0; i < cstr_len(string); i++) {
        if (string[i] != s_string[i]) return CSTR_FALSE;
    }

    return CSTR_TRUE;
}

// Сложение двух строк
void cstr_cat(char *string, char *s_string) {
    printf("<ERROR>: Not implemented yet\n");
    return;
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