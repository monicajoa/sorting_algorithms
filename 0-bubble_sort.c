#include "sort.h"
/**
 * bubble_sort - sorts an array of int in ascending order using Bubble sort
 * @array: array of integers
 * @size: size of array
 *
 * Return: Always 0 (Success)
 */

void bubble_sort(int *array, size_t size)
{
	int aux = 0;
	size_t limit = size - 1;
	size_t idx = 0;

	while (limit > 0)
	{
		for (idx = 0; idx < limit; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				aux = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = aux;
				print_array(array, size);
			}
		}
		limit--;
	}
}
