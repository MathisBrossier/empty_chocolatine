/*
** EPITECH PROJECT, 2024
** my_revstr.c
** File description:
** reverse pointer's value
*/
#include <stdio.h>

int my_strlen_for_revstr(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_revstr(char *str)
{
    int size = my_strlen_for_revstr(str);
    char temp[size + 1];

    for (int i = 0; i < size; ++i) {
        temp[i] = str[size - i - 1];
    }
    temp[size] = '\0';
    for (int i = 0; i < size; ++i) {
        str[i] = temp[i];
    }
    str[size] = '\0';
    return str;
}
