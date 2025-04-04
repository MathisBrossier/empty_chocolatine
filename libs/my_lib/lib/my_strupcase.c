/*
** EPITECH PROJECT, 2024
** my_revstr.c
** File description:
** to Upercase
*/
#include <stdio.h>

int my_strlen_for_strupcase(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strupcase(char *str)
{
    int l = my_strlen_for_strupcase(str);

    for (int i = 0; i < my_strlen_for_strupcase(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    str[l] = '\0';
    return str;
}
