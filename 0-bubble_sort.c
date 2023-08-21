#include "sort.h"
/**
 * _swap - swaps the placement of two integers using temporary variable
 * @xp: pointer to first integer
 * @yp: pointer to second integer
 */
 void _swap(int *xp, int *yp)
 {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
 }

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
 void bubble_sort(int *array, size_t size)
 {
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - j; j++)
        {
            if(array[j] > array[j + 1])
            {
                _swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
 }