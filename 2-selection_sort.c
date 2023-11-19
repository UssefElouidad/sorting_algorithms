#include "sort.h"

/**
 * selection_sort - a function that sorts array of integers
 * in ascending order
 * @array: the array to be sorted.
 * @size: the size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (array[i] > array[k])
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
