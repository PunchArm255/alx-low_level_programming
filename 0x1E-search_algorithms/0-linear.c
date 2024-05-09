#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - search wih a linear search algorithm
 * @array: array to be searched in
 * @size: size of the array
 * @value: looked for value
 *
 * Return: value index (Exists) | -1 (Not Exists)
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
