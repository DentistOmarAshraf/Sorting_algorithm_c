#include "main.h"

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("Unsorted: ");
	print_list(arr, 10);
	bubble_sort(arr, 10);
	printf("sorted  : ");
	print_list(arr, 10);
	printf("============================================\n");
	int arr2[] = {9, 3, 4, 4, 7, 2, 5, 0, 5, 4};
	printf("Unsorted: ");
	print_list(arr2, 10);
	bubble_sort(arr2, 10);
	printf("sorted  : ");
	print_list(arr2, 10);
	printf("===========================================\n");
	int arr3[] = {4, 9, 5, 2, 1, 0, 3, 7, 6, 8};
	printf("Unsorted: ");
	print_list(arr3, 10);
	bubble_sort(arr3, 10);
	printf("sorted  : ");
	print_list(arr, 10);

	return (0);
}
