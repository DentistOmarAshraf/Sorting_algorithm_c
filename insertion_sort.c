#include "main.h"


void insertion_sort(int arr[], size_t size)
{
	size_t i, j;
	int key, temp, ind, min;

	for (i = 0 ; i < size ; i++)
	{
		min = arr[i];
		ind = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				ind = j;
			}
		}
		arr[ind] = arr[i];
		arr[i] = min;
	}
}
