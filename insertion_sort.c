#include "main.h"
/**
 * insertion_sort - sorting algo
 * @arr: array
 * @size: size_t
 * Return: None
 */

void insertion_sort(int arr[], size_t size)
{
	size_t i, j;
	int key;

	for (i = 1 ; i < size ; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
