/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** copy pointer's value into another
*/
#include <stdio.h>

int my_strlen_for_strncpy(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}
