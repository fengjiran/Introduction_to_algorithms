/*
 * insertion_sort.cpp
 *
 *  Created on: 2015年4月12日
 *      Author: Richard
 *
 */



#include <stdio.h>

void insertion_sort(int a[], int length);
void insertion_sort_descent(int a[], int length);

int main()
{
	int a[] = {5, 2, 4, 6, 1, 3};
	int length = sizeof(a)/sizeof(a[0]);
	insertion_sort(a, length);
	insertion_sort_descent(a, length);

	int i;
	for (i = 0; i < length; i++)
		printf("%d ", a[i]);
	printf("\n");

}

/*插入排序，升序排列。传递数组的时候应该把数组的大小也一并传递，
 * 因为只传递数组给函数，进而想要在函数中获得数组的大小是不可
 * 能的 */
void insertion_sort(int a[], int length)
{
	int i, j;
	int key = 0;

	for (i = 1; i < length; i++)
	{
		key = a[i];
		j = i - 1;
		while ((j >= 0) && (a[j] > key))
		{
			a[j+1] = a[j];
			j = j - 1;
		}

		a[j+1] = key;
	}
}



/*降序排序*/
void insertion_sort_descent(int a[], int length)
{
	int i, j;
	int key = 0;

	for (i = 1; i < length; i++)
	{
		key = a[i];
		j = i - 1;
		while ((j >= 0) && (a[j] < key))
		{
			a[j+1] = a[j];
			j = j - 1;
		}

		a[j+1] = key;
	}
}



