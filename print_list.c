#include "main.h"
/**
 * print_list - function to print array
 * @arr: int array
 * @n: size_t - size of array to print
 * Return: (None) Void
 */

void print_list(const int *arr, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}
