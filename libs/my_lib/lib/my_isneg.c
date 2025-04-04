/*
** EPITECH PROJECT, 2024
** my_print_alpha
** File description:
** if a number is positif (P) else (N)
*/
#include <stdio.h>
#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    } else {
        my_putchar(80);
    }
    return 0;
}
