#include"head.h"

int* count_sort(int* p, int size, int max)
{
	int* count = (int*)malloc(sizeof(int) * (max+1));
	for (int i = 0; i < (max + 1); i++)
	{
		int j = 0, k = 0;
		for (k = 0; k < size; k++)
		{
			if (p[k] == i)
				j++;
		}
		count[i] = j;
	}

	int* statistic = (int*)malloc(sizeof(int) * (max + 1));
	int sum = 0;
	for (int i = 0; i < (max + 1); i++)
	{
		sum += count[i];
		statistic[i] = sum;
	}

	int* result = (int*)malloc(sizeof(int) * size);
	int i = 0, j = 0, k = 0;
	//得出第一个有效数字
	while (count[k] == 0)
	{
		k++;
		j++;
	}
	result[0] = k;
	i++;
	for (; i < statistic[0]; i++)
	{
		result[i] = k;
	}
	while (j < max + 1)
	{
		j++;
		if (statistic[j] != statistic[j - 1])
		{
			for (k = 0; k < statistic[j] - statistic[j - 1]; k++)
			{
				result[i] = j;
				i++;
			}
		}
	}
	free(count);
	free(statistic);
	count = NULL;
	statistic = NULL;
	return result;
}