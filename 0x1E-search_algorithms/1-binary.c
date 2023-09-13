#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t h = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (value == array[h])
		return ((int)h);

	if (value < array[h])
		return (recursive_search(array, h, value));

	h++;

	return (recursive_search(array + h, size - h, value) + h);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: Value to find
 * Return: th number
 */


int binary_search(int *array, size_t size, int value)
{
	int x;

	x = recursive_search(array, size, value);

	if (x >= 0 && array[x] != value)
		return (-1);

	return (x);
}
