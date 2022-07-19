#include "sort.h"

/**
 * quick_sort_rec - Sorts an array of integers in ascending order
 * using selection sort algorithm recursion
 * @array: Pointer to array
 * @size: The size of the array
 * @array_init: initial pointer to array
 * @size_init: initial size of the array
 */
void quick_sort_rec(int *array_init, size_t size_init, int *array, size_t size)
{
	size_t j, aux;
	int aux2;
	int i = -1, temp, pivot = array[size - 1];

	if (array && size > 1)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] < pivot)
			{
				i++; /* Increment its index*/
				aux = i;
				if (aux != j && array[j] != array[aux])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(array_init, size_init);
				}
			}
		}
		aux2 = size;
		if (aux2 - 1 != i + 1 && array[aux2 - 1] != array[i + 1])
		{
			array[size - 1] = array[i + 1];
			array[i + 1] = pivot;
			print_array(array_init, size_init);
		}
		if (i > 0)
		{
			quick_sort_rec(array_init, size_init, array, i + 1);
		}
		quick_sort_rec(array_init, size_init, array + i + 2, size - (i + 2));
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array to be sorted
 *
 * Return: No return
 */
void quick_sort(int *array, size_t size)
{
	int *array_init;
	size_t size_init;

	if (array)
	{
		array_init = array;
		size_init = size;
		quick_sort_rec(array_init, size_init, array, size);
	}
}
