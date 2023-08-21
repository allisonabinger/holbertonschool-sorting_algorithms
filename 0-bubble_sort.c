#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
 void bubble_sort(int *array, size_t size)
 {
    size_t i;
    size_t j = size;
    bool bubble = false;

    if (array == NULL || size < 2)
    {
        return;
    }

    while (bubble == false)
    {
        bubble = true;
        for(i = 0; i < j - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array + i, array + 1 + 1);
                print_array(array, size);
                bubble = false;
            }
        }
        j--;
    }
 }