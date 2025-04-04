/*
** EPITECH PROJECT, 2024
** my_compute_power_it
** File description:
** return the power of the number
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    if (p == 1) {
        return nb;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
