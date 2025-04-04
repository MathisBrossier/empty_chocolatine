/*
** EPITECH PROJECT, 2024
** my_strcmp.c
** File description:
** comparate 2 texts
*/

#include <stdio.h>

int my_strlen_for_strcmp(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int compare_strcmp(char const *s1, char const *s2, int i)
{
    if (s1[i] != s2[i]) {
        if ((int) s1[i] > (int) s2[i]) {
            return 1;
        }
        if ((int) s2[i] > (int) s1[i]) {
            return -1;
        }
    }
    return 0;
}

int my_strcmp(char const *s1, char const *s2)
{
    int to_do = 0;
    int strcmp = 0;

    if (my_strlen_for_strcmp(s1) > my_strlen_for_strcmp(s2))
        to_do = my_strlen_for_strcmp(s1);
    if (my_strlen_for_strcmp(s2) > my_strlen_for_strcmp(s1))
        to_do = my_strlen_for_strcmp(s2);
    if (my_strlen_for_strcmp(s1) == my_strlen_for_strcmp(s2))
        to_do = my_strlen_for_strcmp(s1);
    for (int i = 0; i < to_do; ++i) {
        strcmp = compare_strcmp(s1, s2, i);
        if (strcmp == 1 || strcmp == -1) {
            return strcmp;
        }
    }
    return 0;
}
