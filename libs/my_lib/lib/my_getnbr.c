/*
** EPITECH PROJECT, 2024
** my_get_nbr
** File description:
** print number in range of int
*/

#include <stdio.h>
#include <limits.h>
#include "my.h"

int my_strlen_for_get_nbr(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number++;
    }
    return number;
}

int for_marvin(char const *str, int i)
{
    if (!(str[i] >= '1' && str[i] <= '9')) {
        return 2;
    }
    if (str[i - 1] == '-') {
        my_putchar('-');
    }
    my_putchar(str[i]);
    if (str[i + 1] < '1' || str[i + 1] > '9') {
        return 3;
    }
    return 0;
}

int suite(int nz, char const *str)
{
    int hello;

    for (int i = 0; i < nz; ++i) {
        hello = for_marvin(str, i);
        if (hello == 3) {
            return 0;
        }
    }
    return 0;
}

int test_max_min(char max[], int nz, char const *test)
{
    if (nz > my_strlen_for_get_nbr(max)) {
        my_putchar('0');
        return 0;
    }
    if (nz == my_strlen_for_get_nbr(max)) {
        for (int i = 0; (i < nz) && (test[i] > max[i]); ++i) {
            my_putchar('0');
            return 0;
        }
    }
    for (int i = 0; i < nz; ++i) {
        my_putchar(test[i]);
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int nz = my_strlen_for_get_nbr(str);
    long int test[nz];
    int next = 1;

    for (int i = 0; i < nz; ++i) {
        test[i] = '-';
        if (str[i] >= '1' && str[i] <= '9') {
            test[i] = str[i];
            next = 2;
        }
        if (next == 1 && (test[i] == '-' && i == 0)) {
            test[i] = '-';
        }
        if (!(str[i] >= '1' && str[i] <= '9') && !(test[i] == '-' && i == 0)) {
            suite(nz, str);
            return 0;
        }
    }
    test_max_min(test[0] != '-' ? "2147483647" : "-2147483648", nz, str);
    return 0;
}
