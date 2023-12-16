#include "main.h"
/**
 * bubble_sort - sorting algorithm
 * deppend on swapin array element
 * @arr: int array
 * @size: size_t (size of array)
 * Return: None (void)
 */

void bubble_sort(int *arr, size_t size)
{
	size_t i, j;
	bool swaped;
	int temp;

	do {
		swaped = false;
		for (i = 0 ; i < size ; i++)
			for (j = 0 ; j < size - 1 - i ; j++)
			{
				if (arr[j] > arr[j + 1])
				/*" > " operator sorting from small to big */
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					swaped = true;
				}
			}
	} while (swaped);
}

