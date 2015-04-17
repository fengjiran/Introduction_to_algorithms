/*
 * insertion_sort.cpp
 *
 *  Created on: 2015��4��12��
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

/*���������������С����������ʱ��Ӧ�ð�����Ĵ�СҲһ�����ݣ�
 * ��Ϊֻ���������������������Ҫ�ں����л������Ĵ�С�ǲ���
 * �ܵ� */
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



/*��������*/
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



