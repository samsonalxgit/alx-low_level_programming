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
	while(index < size)
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

int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
