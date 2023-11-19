#include "sort.h"

/**
 * bubble_sort - a function that sorts an array
 * of integers in an ascending orger.
 * @array: the array to be sorted.
 * @size: number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int swap;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
