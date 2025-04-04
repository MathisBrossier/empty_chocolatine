/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** copy pointer's value into another
*/
#include <stdio.h>

int my_strlen_for_strcpy(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strcpy(char *dest, char const *src)
{
    int l = my_strlen_for_strcpy(src);

    for (int i = 0; i < l; ++i) {
        dest[i] = src[i];
    }
    dest[l] = '\0';
    return dest;
}
