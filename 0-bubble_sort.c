#include "sort.h"

/**
 * bubble_sort: This sorts the @array using bubble sort algorithm
 * @array: The array to be sorted
 * @size: The total length of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				SWAP(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
