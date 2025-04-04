/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** count a text
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int number = 0;

    if (str == NULL || !str)
        return 0;
    while (str[number] != '\0') {
        number++;
    }
    return number;
}
