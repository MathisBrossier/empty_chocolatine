/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** print a text
*/

#include <stdio.h>
#include "my.h"

int my_putstr(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    for (int i = 0; i != number; ++i) {
        my_putchar(str[i]);
    }
    return 0;
}
