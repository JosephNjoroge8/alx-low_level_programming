#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: Left index of the array
 * @right: Right index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @left: Left index of the search range
 * @right: Right index of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return -1;

    print_array(array, left, right);
    mid = (left + right) / 2;

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] < value)
            return (int)mid;
        return advanced_binary_recursive(array, left, mid, value);
    }
    else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, right, value);
    else
        return advanced_binary_recursive(array, left, mid - 1, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using Advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
