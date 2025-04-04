/*
** EPITECH PROJECT, 2024
** my_strstr.c
** File description:
** find a texte
*/
#include <stdio.h>

int my_strlen_for_strstr(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int is_same(char str[], char const *to_find, int to_size, int start)
{
    for (int j = 0; j < to_size; ++j) {
        if (str[start + j] != to_find[j]) {
            return 0;
        }
    }
    return 1;
}

int check_validity(char str[], char const *to_find, int to_size, int i)
{
    if (str[i] == to_find[0]) {
        if (is_same(str, to_find, to_size, i) == 1) {
            return 1;
        }
    }
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int size = my_strlen_for_strstr(str);
    int to_size = my_strlen_for_strstr(to_find);

    if (size == 0 && to_size == 0) {
        return str;
    }
    if (to_size == 0) {
        return str;
    }
    if (size == 0 || to_size > size) {
        return NULL;
    }
    for (int i = 0; i < size; ++i) {
        if (check_validity(str, to_find, to_size, i) == 1) {
            return &str[i];
        }
    }
    return NULL;
}
