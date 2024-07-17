#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, jump;

    if (array == NULL || size == 0)
        return -1;

    step = sqrt(size);
    prev = 0;
    jump = 0;

    while (jump < size && array[jump] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
        prev = jump;
        jump += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

    jump = jump < size - 1 ? jump : size - 1;
    for (; prev <= jump; prev++)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (int)prev;
    }

    return -1;
}
