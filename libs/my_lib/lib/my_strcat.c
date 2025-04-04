/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** Concatenates two strings
*/

#include <stdio.h>

int my_strlen_strcat(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen_strcat(dest);
    int len_src = my_strlen_strcat(src);

    for (int i = 0; i < len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + len_src] = '\0';
    return dest;
}
