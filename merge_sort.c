#include "main.h"
/*--------Merge Header--------*/

void merge(int *, int);
void merge_rec(int *, int , int);
void merge_sort(int*, int, int, int);

/*----------Merge sort Function------*/

void merge(int arr[], int len)
{
	merge_rec(arr, 0, len - 1);
}

void merge_rec(int arr[], int l, int r)
{
	int m;
	
	if (l < r)
	{
		m = l + (r - l) / 2;
		merge_rec(arr, l, m);
		merge_rec(arr, m + 1, r);
		merge_sort(arr, l, m, r);
	}
}

void merge_sort(int arr[], int l, int m, int r)
{
	int left_size = m - l + 1;
	int right_size = r - m;
	int temp_l[left_size], temp_r[right_size];
	int i, j, k;

	for (i = 0 ; i < left_size ; i++)
		temp_l[i] = arr[i + l];

	for (i = 0 ; i < right_size ; i++)
		temp_r[i] = arr[m + i + 1];

	for (i = 0, j = 0, k = l ; k <= r ; k++)
	{
		if ((i < left_size) && ((j >= right_size) || (temp_l[i] < temp_r[j])))
		{
			arr[k] = temp_l[i];
			i++;
		}
		else
		{
			arr[k] = temp_r[j];
			j++;
		}
	}

}
/*----------------MAIN------------------*/
int main(void)
{
	int arr[] = {9, 2, 3, 1, 0, 7, 6, 5, 4, 8};
	int len = sizeof(arr)/ sizeof(arr[0]);

	merge(arr, len);
	print_list(arr, len);

	return (0);
}
