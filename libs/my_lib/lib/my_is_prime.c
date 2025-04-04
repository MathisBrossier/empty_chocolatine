/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** if a number is a prime, return 1 else 0
*/

#include <stdio.h>

int my_is_prime(int nb)
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
