#include"head.h"

void merge_array(int* a, int begin, int mid, int end, int* temp)
{
	int left = begin;
	int right= mid + 1;
	int i = 0;
	while (left <= mid && right <= end)
	{
		if (a[left] < a[right])
		{
			temp[i] = a[left];
			left++;
			i++;
		}
		else
		{
			temp[i] = a[right];
			right++;
			i++;
		}
	}
	while (left <= mid)
	{
		temp[i] = a[left];
		left++;
		i++;
	}
	while (right <= end)
	{
		temp[i] = a[right];
		right++;
		i++;
	}
	for (int k = 0; k < i; k++)
	{
		a[begin + k] = temp[k];
	}
	
}

void merge_sort(int* a, int begin, int end, int* temp)
{
	if (begin < end)
	{
		int mid = (begin + end) / 2;
		merge_sort(a, begin, mid, temp);
		merge_sort(a, mid + 1, end, temp);
		merge_array(a, begin, mid, end, temp);
	}
}