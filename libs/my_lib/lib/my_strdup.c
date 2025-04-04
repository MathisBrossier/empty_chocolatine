/*
** EPITECH PROJECT, 2024
** mt_strdup
** File description:
** for marvin
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int l = 0;
    char *marv;

    if (src == NULL) {
        return NULL;
    }
    while (src[l] != '\0') {
        l++;
    }
    marv = malloc(sizeof(char) * (l + 1));
    if (marv == NULL) {
        return NULL;
    }
    for (int j = 0; j < l; j++) {
        marv[j] = src[j];
    }
    marv[l] = '\0';
    return marv;
}
