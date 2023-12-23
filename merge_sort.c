#include "main.h"
/*-----------header----------*/
void merge_sort(int arr[], int len);
void merge_rec(int arr[], int l, int r);
void merge_sorted(int arr[], int l, int m, int r);
/*----------function---------*/

void merge_sort(int arr[], int len)
{
	merge_rec(arr, 0, len - 1);
}
void merge_rec(int arr[], int l, int r)
{
	int mid = l + (r - l) / 2;
	int i;

	if (l < r)
	{
		merge_rec(arr, l, mid);
		merge_rec(arr, mid + 1, r);
		merge_sorted(arr, l, mid, r);
	}
}
void merge_sorted(int arr[], int l, int m, int r)
{
	int i, j, k;
	int left_length = m - l + 1;
	int right_length = r - m;
	int left_arr[left_length], right_arr[right_length];

	for (i = 0 ; i < left_length ; i++)
		left_arr[i] = arr[l + i];

	for (i = 0 ; i < right_length ; i++)
		right_arr[i] = arr[m + 1 + i];

	for (i = 0, j = 0, k = l; k <= r; k++)
	{
		if ((i < left_length) 
				&& (j >= right_length || (left_arr[i] <= right_arr[j])))
		{
			arr[k] = left_arr[i];
			i++;
		}
		else
		{
			arr[k] = right_arr[j];
			j++;
		}
	}
}

int main(void)
{
	int arr[] = {9, 2, 3, 1, 0, 7, 6, 5, 4, 8};
	int len = sizeof(arr)/ sizeof(arr[0]);

	merge_sort(arr, len);
	print_list(arr, len);

	return (0);
}
