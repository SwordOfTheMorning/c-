#include<stdio.h>
#include<iostream>
using namespace std;

void quick_sort(int* a, int first, int last)
{
	int low = first;
	int high = last;
	if (low >= high)
	{
		return;
	}
	int key = a[first];
	while (first < last)
	{
		while (first < last && key >= a[last])
		{
			--last;
		}
		a[first] = a[last];
		a[last] = key;
		while (first < last && key <= a[first])
		{
			++first;
		}
		a[last] = a[first];
		a[first] = key;
	}
	quick_sort(a, low, first - 1);
	quick_sort(a, first + 1, high);
}

void bubble_sort(int* a, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = i +1; j < length; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void inputArray(int* a, int length, int* b)
{
	for (int i = 0; i < length; i++)
	{
		cout<<a[i]<<",";
		a[i] = b[i];
	}
	cout<<endl;
}

int main()
{
	int a[] = {25, 9, 1, 30, 99, 20};
	int b[] = {25, 9, 1, 30, 99, 20};
	int input = 1;
	while (input > 0)
	{
		cin>>input;
		switch (input)
		{
		case 1:
			quick_sort(a, 0, 5);
			inputArray(a, 6, b);
			break;
		case 2:
			bubble_sort(a, 6);
			inputArray(a, 6, b);
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}