#include"head.h"

void quick_sort(int* p, int low, int high)
{
	int pos;
	if (low < high)
	{
		pos = find_pos(p, low, high);
		quick_sort(p, low, pos - 1);
		quick_sort(p, pos + 1, high);
	}
	return 0;
}


//¿ìËÙÅÅÐò
int find_pos(int* p, int low, int high)
{
	int target = p[low];
	while (low < high)
	{
		while (low < high && p[high] >= target)
		{
			high--;
		}
		p[low] = p[high];
		while (low < high && p[low] <= target)
		{
			low++;
		}
		p[high] = p[low];
	}
	p[low] = target;
	return low;
}
