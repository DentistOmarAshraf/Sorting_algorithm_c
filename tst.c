#include "main.h"

int main(void)
{
	int i, j, temp, index, min;
	int arr[] = {14, 90, 2, 1, 3, 0, 5, 122, 66, 55, 323, 42, 0};
	int len = sizeof(arr)/ sizeof(arr[0]);
	int search, low = 0, high = len - 1, mid, gs;
	
	/*------------Selection sort--------------*/
	for (i = 0 ; i < len ; i++)
	{
		index = i;
		min = arr[i];
		for (j = i + 1 ; j < len ; j++)
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	/*--------Array printing after sorting--------*/
	for (i = 0 ; i < len ; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", arr[i]);
	}
	printf("\n");

	/*-------------Binary Search---------------*/
	search = 323;
	while (low <= high)
	{
		mid = (low + high) / 2;
		gs = arr[mid];
		if (gs == search)
		{
			printf("found ==> %d\nElement ==> %d\n", mid, arr[mid]);
			break;
		}
		if (gs < search)
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (low > high) /*--------not Found------*/
		printf("Not found\n");

	return (0);
}
