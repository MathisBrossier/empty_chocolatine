/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** find for a prime (sup than the input number)
*/

#include <stdio.h>

int my_is_prime_for_find(int nb)
{
    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i <= nb - 1; ++i) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    while (my_is_prime_for_find(nb) == 0) {
        nb++;
    }
    return nb;
}
