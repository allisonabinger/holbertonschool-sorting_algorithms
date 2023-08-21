#include "sort.h"
/**
*partition - Partions array using lomuto partition scheme
* @array: array to partition
* @low: starting index
* @high: ending index
* Return: index of pivot element
*/
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = low;

	for (; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
* quick_sort_helper - recursive helper func for quick sort
* @array: array to sort
* @low: starting index of partition
* @high: ending index of partition
*/
void quick_sort_helper(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);

		quick_sort_helper(array, low, pivot_index -1);
		quick_sort_helper(array, pivot_index + 1, high);
	}
}

/**
* quick_sort - sorts array of integers in ascending order using quick sort
* method with lomuto partition scheme
* @array: array to be sorted
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || szie < 2)
		return;
	quick_sort_helper(array, 0, size -1);
}
