#include "sort.h"
#include <stdbool.h>

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
	bool swapped;

	if (array)
	{
		/* One by one move boundary of unsorted subarray */
		for (i = 0; i < size - 1; i++)
		{
			/* Find the minimum element in unsorted array */
			min_idx = i;
			swapped = false;
			for (j = i + 1; j < size; j++)
				if (array[j] < array[min_idx])
				{
					min_idx = j;
					swapped = true;
				}
			/* Swap the found minimum element with the first element*/
			if (swapped == true)
			{
				temp = array[min_idx];
				array[min_idx] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
