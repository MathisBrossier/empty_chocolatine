/*
** EPITECH PROJECT, 2024
** my_showstr.c
** File description:
** showstr
*/
#include <stdio.h>
#include <unistd.h>

void my_putchar_showstr(char c)
{
    write(1, &c, 1);
}

int my_strlen_for_my_showstr(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int my_type_isprintable_for_my_showstr(char letter)
{
    if ((int) letter > 31 && (int) letter < 127) {
        return 1;
    }
    return 0;
}

int my_putnbr_base_for_marvin(int nbr, char const *base)
{
    int l = my_strlen_for_my_showstr(base);

    my_putchar_showstr(base[nbr % l]);
    return 1;
}

static int my_showstr_for_marvin(char *str, int i)
{
    if (my_type_isprintable_for_my_showstr(str[i]) == 1) {
        my_putchar_showstr(str[i]);
    } else {
        my_putchar_showstr('\\');
        if (str[i] <= 31) {
            my_putchar_showstr('0');
        }
        my_putnbr_base_for_marvin(str[i], "0123456789abcdef");
    }
    return 0;
}

void my_showstr(char *str)
{
    int l = my_strlen_for_my_showstr(str);

    for (int i = 0; i < l; i++) {
        my_showstr_for_marvin(str, i);
    }
    return;
}
