#include "sort.h"

/**
 * swap_items - Swaps two items in an array
 * @array: The array to modify.
 * @l: The index of the left item.
 * @r: The index of the right item
 */
void swap_items(int *array, size_t l, size_t r)
{
	int tmp;

	if (array != NULL)
	{
		tmp = array[l];
		array[l] = array[r];
		array[r] = tmp;
	}
}

/**
 * bitonic_merge - Merges the items in a sub-array based on a given order.
 * @array: The array to sort.
 * @size: The length of the array (should be a power of 2)
 * @low: The starting position of the sub-array.
 * @n: The length of the sub-array.
 * @ascending: A flag specifying the direction of the items in this sub-array.
 */

