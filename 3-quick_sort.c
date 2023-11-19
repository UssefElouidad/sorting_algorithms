#include "sort.h"
/**
 * swap2 - swaps two integer values.
 * @array: the integer array to sort.
 * @size: the size of the array.
 * @a: address of the first value.
 * @b: address of the second value.
 * Return: void
 *
 */
void swap2(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - a fucntion that partitions in the array.
 * @array: the integer array sort.
 * @size: the size of the sort range.
 * @l: the low index of the sort range.
 * @h:the hight index of the sort range.
 * Return: size_t
 *
 */
size_t lomuto_partition(int *array, size_t size, ssize_t l, ssize_t h)
{
	int i, j, pivot = array[h];

	for (i = j = l; j < h; j++)

		if (array[j] < pivot)
			swap2(array, size, &array[j], &array[i++]);
	swap2(array, size, &array[i], &array[h]);
	return (i);

}

/**
 * quicksort - a function that quicksortsvi lomuto partitioning scheme
 * @array: athe integer array to set,
 * @size: the size of the array.
 * @l: the low index of the sorting range,
 * @h: the hight index of the sorting range.
 * Return; void
 *
 */
void quicksort(int *array, size_t size, ssize_t l, ssize_t h)
{
	if (l < h)
	{
		size_t p = lomuto_partition(array, size, l, h);

		quicksort(array, size, l, p - 1);
		quicksort(array, size, p + 1, h);
	}
}

/**
 * quick_sort - a funcion that that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the size of the array.
 * @size: the size of th earray.
 *
 * R3turn: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, size, 0, size - 1);

}
