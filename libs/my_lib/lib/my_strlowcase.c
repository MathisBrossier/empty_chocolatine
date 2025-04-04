/*
** EPITECH PROJECT, 2024
** my_strlowcase.c
** File description:
** to lowercase
*/
#include <stdio.h>

int my_strlen_for_strlowcase(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strlowcase(char *str)
{
    int l = my_strlen_for_strlowcase(str);

    for (int i = 0; i < my_strlen_for_strlowcase(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    str[l] = '\0';
    return str;
}
