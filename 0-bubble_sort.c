#include "sort.h"
#include "swap.c" /* Why do i have to do this? its defined in sort.h :( */
/**
	* bubble_sort - sorts an array of integers in ascending order
	* @array: array of integers
	* @size: size of the array
	*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
				size_t j;
	bool bubble;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		bubble = true;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				bubble = false;
				print_array(array, size);
			}
		}
		if (bubble == true)
			break;
	}
}
