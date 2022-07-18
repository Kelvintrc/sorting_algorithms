#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - The function to sort an array
 * @array: The array to be sorted
 * @size: The number of elements in the arraiy
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp;
	bool swapped;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
