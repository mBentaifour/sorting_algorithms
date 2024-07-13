#include "sort.h"
/**
 * bubble_sort - function that sorts an array of ints
 * using bubble sort algorithm
 *
 * @array: array of ints
 * @size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t j, k;

	if (!array || !size)
		return;

	j = 0;
	while (j < size)
	{
		for (k = 0; k < size -1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] - temp;
				print_array(array, size);
			}
		}
		j++;
	}
}
