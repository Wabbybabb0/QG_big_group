#include"head.h"

//p是数组首地址
int* insert_sort(int* p, int size)
{
	if (p[0] > p[1])
	{
		int temp = p[0];
		p[0] = p[1];
		p[1] = temp;
	}
	for (int i = 2; i < size; i++)
	{
		int target = p[i];
		int low = 0;
		int high = i - 1;
		int mid = (low + high) / 2;
		while (low != high && p[mid] != target)
		{
			mid = (high + low) / 2;
			if (p[mid] > target)
			{
				high--;
			}
			else if(p[mid] < target)
			{
				low++;
			}
		}
		if (p[mid] == target)
		{
			for (int j = i - 1; j > mid; j--)
			{
				p[j + 1] = p[j];
			}
			p[mid + 1] = target;
		}
		else if (high == low)
		{
			if (p[low] < target)
			{
				for (int j = i - 1; j > low; j--)
				{
					p[j + 1] = p[j];
				}
				p[low + 1] = target;
			}
			if (p[high] > target)
			{
				for (int j = i - 1; j > high - 1; j--)
				{
					p[j + 1] = p[j];
				}
				p[low] = target;
			}
		}
	}
	return p;
}