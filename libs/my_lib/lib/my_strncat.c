/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** Concatenates two strings with n caracters
*/

#include <stdio.h>

int my_strlen_strncat(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen_strncat(dest);
    int len_src = my_strlen_strncat(src);

    for (int i = 0; i < nb; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + len_src] = '\0';
    return dest;
}
