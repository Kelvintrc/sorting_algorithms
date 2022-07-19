#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Return: No return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_idx;

	/* One by one move boundary of unsorted subarray */
	for (i = 0; i < size - 1; i++)
	{
		/* Find the minimum element in unsorted array */
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		/* Swap the found minimum element with the first element*/
		temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
