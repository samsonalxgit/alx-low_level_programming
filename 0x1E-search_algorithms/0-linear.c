#include "search_algos.h"

/**
 * linear_search - Function that performs a linear search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (!array)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			index = (int)i;
			break;
		}
	}

	return (index);
}
