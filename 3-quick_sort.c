#include "sort.h"
/**
* partition - Partions array using lomuto partition scheme
* @array: array to partition
* @low: starting index
* @high: ending index
* Return: index of pivot element
*/
int partition(int* array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		print_array(array, size);
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);

	return (i + 1);
}

/**
* quick_sort_helper - recursive helper func for quick sort
* @array: array to sort
* @low: starting index of partition
* @high: ending index of partition
*/

void quick_sort_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high, size);
		
		quick_sort_helper(array, low, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, high, size);
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
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size -1, size);
}
