#include "main.h"

/**
 * select_sort - selection sort algoraithm
 * @arr: array
 * @size: (size_t) size of array
 * Return: None
 */

void select_sort(int *arr, size_t size)
{
	size_t i, j;
	int *new;
	int min, index;

	for (i = 0 ; i < size ; i++)
	{
		min = arr[i];
		index = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i];
		arr[i] = min;
	}
}
