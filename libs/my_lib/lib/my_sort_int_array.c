/*
** EPITECH PROJECT, 2024
** mt_sort_int_array
** File description:
** It shifts the large numbers to the right and the smallest to the left
*/

#include <stdio.h>

int print_info(int *array, int j)
{
    int max;

    if (array[j] > array[j + 1]) {
        max = array[j];
        array[j] = array[j + 1];
        array[j + 1] = max;
    }
    return 0;
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            print_info(array, j);
        }
    }
    return;
}
