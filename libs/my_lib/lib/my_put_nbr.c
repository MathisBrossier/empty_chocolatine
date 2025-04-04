/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** Displays the numbers given using my_putchar
*/
#include <stdio.h>
#include <limits.h>
#include "my.h"

int number_of_elements(long long int N)
{
    int i = 0;

    while (N > 0) {
        i++;
        N /= 10;
    }
    return i;
}

int generate_chaine_and_print(long long int N, int i)
{
    int i2 = 0;
    char final[i];
    char hel;

    if (N < 0) {
        N = -N;
    }
    while (N > 0) {
        hel = N % 10 + '0';
        final[i - i2 - 1] = hel;
        N /= 10;
        i2++;
    }
    i2 = 0;
    while (i2 != i) {
        my_putchar(final[i2]);
        i2++;
    }
    return 0;
}

int my_put_nbr(int nb)
{
    long long int N = nb;
    int i = 0;

    if (!nb) {
        my_putchar(48);
    }
    if (N < 0) {
        N = -N;
        my_putchar('-');
    }
    i = number_of_elements(N);
    generate_chaine_and_print(N, i);
    return 0;
}
