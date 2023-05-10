#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int linear_search(int *array, size_t size, int value)
{
	//size--- number of elements in array
	//value---is the value to search for
	//array---is a pointer to the first element of the array to search in
	//if value is not present in array or if array is NULL, the function must return -1
	int index = 0;
	while (index < size)
	{
		if(array[index] = value)
		{
			return value;
		}
		else
		{
			index++;
		}
	}
	return -1;
}
