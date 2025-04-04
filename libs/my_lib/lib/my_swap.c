/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swap value pointer
*/
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int swap_a = *a;
    int swap_b = *b;

    *a = swap_b;
    *b = swap_a;
    return;
}
