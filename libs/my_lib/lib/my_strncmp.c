/*
** EPITECH PROJECT, 2024
** my_strcmp.c
** File description:
** comparate 2 texts with n characters
*/

#include <stdio.h>

int my_cmplen(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int my_next(char const *s1, char const *s2, int repet)
{
    for (int i = 0; i < repet; ++i) {
        if (s1[i] != s2[i]) {
            return (int) s1[i] - (int) s2[i];
        }
    }
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int repet = 0;

    if (s1 == NULL || s2 == NULL || n == 0)
        return 0;
    if (n > my_cmplen(s1) || n == 0 || n > my_cmplen(s2)) {
        repet = my_cmplen(s1);
    } else {
        repet = n;
    }
    if (n > my_cmplen(s2) || n == 0) {
        repet = my_cmplen(s2);
    } else {
        repet = n;
    }
    if (s1[0] == '\0')
        return -1 * (int) s2[0];
    if (s2[0] == '\0')
        return (int) s1[0];
    return my_next(s1, s2, repet);
}
