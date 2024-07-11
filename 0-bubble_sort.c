#include "sort.h"

/**
 *
 */


void bubble_sort(int *array, size_t size)
{
		size_t i;
		size_t j;
		int tmp = 0;

		for (i = 1; i < size; i++)
				for (j = 0; j < i; j++)
				{
						if (array[i] < array[j])
						{
								tmp = array[i];
								array[i] = array[j];
								array[j] = tmp;
						}
						print_array(array, size);
				}
}
