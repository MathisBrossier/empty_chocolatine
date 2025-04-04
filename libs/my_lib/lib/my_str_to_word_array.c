/*
** EPITECH PROJECT, 2024
** my_str_to_word_array.c
** File description:
** for marvin
*/

#include <stdlib.h>
#include "my.h"

int number_word(char const *str)
{
    int count = 1;

    for (int i = 0; i < my_strlen(str); i++) {
        if (my_type(str[i]) == 0 && my_type(str[i + 1]) != 0) {
            count++;
        }
    }
    return count;
}

static char **my_word_marvin(char **words, char const *str, int st, int wi)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] != ' ')
            st++;
        if (st > 0 && str[i] == ' ') {
            words[wi] = malloc((st + 1) * sizeof(char));
            my_strncpy(words[wi], &str[i - st], st);
            words[wi][st] = '\0';
            wi++;
            st = 0;
        }
        if (i == my_strlen(str) - 1 && str[i] != ' ') {
            words[wi] = malloc((st + 1) * sizeof(char));
            my_strncpy(words[wi], &str[i - st + 1], st);
            words[wi][st] = '\0';
            wi++;
        }
    }
    words[wi] = NULL;
    return words;
}

char **my_str_to_word_array(char const *str)
{
    char **words = malloc((number_word(str) + 1) * sizeof(char *));
    int word_index = 0;
    int start = 0;

    if (str == NULL || my_strlen(str) == 0)
        return NULL;
    return my_word_marvin(words, str, start, word_index);
}
