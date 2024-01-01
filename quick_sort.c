#include "main.h"


void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void quick_sort(int *arr, int size)
{
	quick_rec(arr, size, 0, size - 1);
}

void quick_rec(int *arr, int size, int low, int high)
{
	int piv_index;

	if (low < high)
	{
		piv_index = partition(arr, size, low, high);
		quick_rec(arr, size, low, piv_index - 1);
		quick_rec(arr, size, piv_index + 1, high);
	}
}

int partition(int *arr, int size, int low, int high)
{
	int pivot, i, j;

	pivot = arr[high];
	i = low - 1;
	for (j = low ; j < high ; j++)
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			if (i != j)
				print_list(arr, size);
		}
	i++;
	swap(&arr[i], &arr[high]);
	if (i != j)
		print_list(arr, size);
	return (i);
}

int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	print_list(arr, size);
	printf("\n");
	quick_sort(arr, size);
	printf("\n");
	print_list(arr, size);

	return (0);
}
