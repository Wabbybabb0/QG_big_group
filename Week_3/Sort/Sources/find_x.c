#include"head.h"

void find_x_practice()
{
	int size = 0;
	int num = 0;
	int target = -1;
	printf("������Ҫ����ĸ�����");
	is_false_type(&size);
	int* a = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		printf("��%d������Ϊ��", i + 1);
		is_false_type(&num);
		a[i] = num;
	}
	printf("��������Ҫ��ѯ��λ�Σ�");
	is_false_type(&target);
	int target_num = find_x(a, size, target);
	printf("��%d����Ϊ��%d\n", target, target_num);
}

int find_x(int* p, int size, int pos)
{
	int last_pos = 0;
	int random_pos = find_pos(p,0,size-1) + 1;
	while (random_pos != pos)
	{
		last_pos = random_pos;
		if (random_pos > pos)
		{
			random_pos = find_pos(p, 0, random_pos - 1);
		}
		else
		{
			random_pos = find_pos(p, random_pos + 1, last_pos - 1);
		}
	}
	return p[pos-1];

	/*int pos;
	if (pos)
	{
		pos = find_pos(p, low, high);
		quick_sort(p, low, pos - 1);
		quick_sort(p, pos + 1, high);
	}*/
}