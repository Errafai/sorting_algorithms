#include "sort.h"

/**
 * bubble_sort - use the bubble sorting algorithm on an array
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: return non but print the array after every swap
 */


void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
