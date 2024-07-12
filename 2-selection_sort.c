#include "sort.h"

/**
 * selection_sort - sort an array using selection sort
 * @array: array of integers
 * @size: the size of the array
 * Return none but print after every swap
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp, min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				idx = j;
			}
		}
		temp = array[i];
		array[i] = array[idx];
		array[idx] = temp;
		print_array(array, size);
	}
}