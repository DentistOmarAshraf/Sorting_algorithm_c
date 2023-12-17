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
	int min, n;
	int temp;

	for (i = 0 ; i < size ; i++)
	{
		n = i;
		min = arr[i];
		for (j = i ; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				n = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[n];
		arr[n] = temp;
	}
}
