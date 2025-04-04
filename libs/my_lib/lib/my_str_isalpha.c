/*
** EPITECH PROJECT, 2024
** my_str_isalpha.c
** File description:
** is alpha
*/
#include <stdio.h>

int my_strlen_for_isalpha(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int my_type_isalpha(char letter)
{
    if ((int) letter > 47 && (int) letter < 58) {
        return 1;
    }
    if ((int) letter > 64 && (int) letter < 91) {
        return 2;
    }
    if ((int) letter < 123 && (int) letter > 96) {
        return 3;
    }
    return 0;
}

int my_str_isalpha(char const *str)
{
    int l = my_strlen_for_isalpha(str);

    if (l == 0) {
        return 1;
    }
    for (int i = 0; i < l; i++) {
        if (my_type_isalpha(str[i]) != 3 && my_type_isalpha(str[i]) != 2) {
            return 0;
        }
    }
    return 1;
}
