/*
** EPITECH PROJECT, 2024
** my_str_isprintable.c
** File description:
** isprintable
*/
#include <stdio.h>

int my_strlen_for_isprintable(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int my_type_isprintable(char letter)
{
    if ((int) letter > 31 && (int) letter < 127) {
        return 1;
    }
    return 0;
}

int my_str_isprintable(char const *str)
{
    int l = my_strlen_for_isprintable(str);

    if (l == 0) {
        return 1;
    }
    for (int i = 0; i < l; i++) {
        if (my_type_isprintable(str[i]) != 1) {
            return 0;
        }
    }
    return 1;
}
