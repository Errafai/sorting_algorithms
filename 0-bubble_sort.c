#include "sort.h"

/**
 *
 */


void bubble_sort(int *array, size_t size)
{
		size_t i;
		size_t j;
		int tmp = 0;

		for (i = 0; i < size - 1; i++)
		{
				for (j = i + 1; j < size; j++)
				{
						if (array[i] > array[j])
						{
								tmp = array[i];
								array[i] = array[j];
								array[j] = tmp;
								print_array(array, size);
						}
				}
		}
}
