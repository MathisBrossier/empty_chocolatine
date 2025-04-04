/*
** EPITECH PROJECT, 2024
** my_strcapitalize.c
** File description:
** to upercase some case
*/
#include <stdio.h>

int my_strlen_for_strcapitalize(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

char *my_strlowcase_for_strcapitalize(char *str)
{
    int l = my_strlen_for_strcapitalize(str);

    for (int i = 0; i < my_strlen_for_strcapitalize(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    str[l] = '\0';
    return str;
}

int my_type(char letter)
{
    if ((int) letter > 47 && (int) letter < 58) {
        return 1;
    }
    if ((int) letter > 64 && (int) letter < 91) {
        return 2;
    }
    if ((int) letter < 123 && (int) letter > 96) {
        return 3;
    }
    if ((int) letter == 37 || (int) letter == 43
    || (int) letter == 45 || (int) letter == 42
    || (int) letter == 47) {
        return 4;
    }
    return 0;
}

int do_action(char *str, int i)
{
    if (i != 0) {
        if (my_type(str[i - 1]) == 0 && my_type(str[i]) == 3) {
            str[i] = str[i] - 32;
        }
    } else if (my_type(str[i]) == 3) {
        str[i] = str[i] - 32;
    }
    return 0;
}

char *my_strcapitalize(char *str)
{
    int l = my_strlen_for_strcapitalize(str);

    my_strlowcase_for_strcapitalize(str);
    for (int i = 0; i < l; i++) {
        do_action(str, i);
    }
    return str;
}
