#include "main.h"

int main(void)
{
	int arr[] = {99, 1, 100, 12, 32243, 0};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	insertion_sort(arr, size);
	print_list(arr, size);

	return (0);
}
