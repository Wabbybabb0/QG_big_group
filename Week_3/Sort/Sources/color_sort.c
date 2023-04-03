#include"head.h"

void swap(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void color_practice()
{
	int size = 0;
	int num = 0;
	printf("请输入要输入的个数：");
	is_false_type(&size);
	int* a = (int*)malloc(sizeof(int) * size);
	printf("请输入一串仅含有0、1、2的数据\n");
	for (int i = 0; i < size; i++)
	{
		printf("第%d个数据为：", i + 1);
		is_false_type(&num);
		while (num != 0 && num != 1 && num != 2)
		{
			printf("请重新输入：");
			is_false_type(&num);
		}
		a[i] = num;
	}
	color_sort(a, size);
	free(a);
	a = NULL;
}

void color_sort(int* p, int size)
{
	int p0 = 0;
	int p1 = 0;
	int p2 = size - 1;

	while (p[p0] == 0)
	{
		p0++;
	}
	while (p[p2] == 2)
	{
		p2--;
	}
	p1 = p0;

	while (p1 != p2)
	{
		while (p[p1] != 1)
		{
			if (p[p1] == 0 && p[p0] != 0)
			{
				swap(&p[p1], &p[p0]);
				p0++;
			}
			else if (p[p1] == 0 && p[p0] == 0)
			{
				if (p0 < p1)
					p0++;
				else
				{
					p0++;
					p1++;
				}
			}

			if (p[p1] == 2 && p[p2] != 2)
			{
				swap(&p[p1], &p[p2]);
				p2--;
			}
			else if (p[p1] == 2 && p[p2] == 2)
			{
				if (p2 == p1)
					break;
				if (p2 > p1)
					p2--;
				else
				{
					p2--;
					p1++;
				}
			}
		}
		if (p1 != p2)
			p1++;
		else
			break;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", p[i]);
	}
}

















//void color_sort(int* p, int size)
//{
//	int p0 = 0;
//	int p1 = 0;
//	int p2 = size - 1;
//
//	while (p[p0] == 0)
//	{
//		p0++;
//	}
//	while (p[p2] == 2)
//	{
//		p2--;
//	}
//	p1 = p0;
//	while (p1 != p2)
//	{
//		//print(p, size);
//		if (p[p1] == 0 && p[p0] != 0)
//		{
//			swap(&p[p1], &p[p0]);
//			if()
//			p0++;
//			//print(p, size);
//		}
//		else if (p[p1] == 0 && p[p0] == 0)
//		{
//			p0++;
//			//print(p, size);
//
//		}
//		if (p1 < p0)
//		{
//			p1 = p0;
//		}
//
//		if (p[p1] == 2 && p[p2] != 2)
//		{
//			swap(&p[p2], &p[p0]);
//			//print(p, size);
//
//			p2--;
//			if (p2 != p1)
//			{
//				p1++;
//				print(p, size);
//
//			}
//			else if(p2 == p1 && p[p1]<p[p0])
//			{
//				swap(&p[p1], &p[p0]);
//				//print(p, size);
//
//			}
//		}
//		else if (p[p1] == 2 && p[p2] == 2)
//		{
//			p2--;
//			//print(p, size);
//
//		}
//		
//		if (p[p1] == 1)
//		{
//			p1++;
//			//print(p, size);
//		}
//	}
//}




















//void swap(int* val1, int* val2)
//{
//	int temp = *val1;
//	*val1 = *val2;
//	*val2 = temp;
//}
//
//void color_sort(int* p, int size)
//{
//	int p0 = 0;
//	int p1 = 0;
//	int p2 = size - 1;
//	for (; p1 != p2 + 1; p1++)
//	{
//		printf("begin : p1:%d  p2:%d\n", p1, p2);
//		if (p[p1] == 0 && p[p0] !=0)
//		{
//			int temp = p[p1];
//			p[p1] = p[p0];
//			p[p0] = temp;
//			p0++;
//		}
//
//		if (p[p1] == 2 && p[p2] != 2)
//		{
//			int temp = p[p1];
//			p[p1] = p[p2];
//			p[p2] = temp;
//			p2--;
//		}
//
//		if (p[p1] == 0 && p[p0] != 0)
//		{
//			int temp = p[p1];
//			p[p1] = p[p0];
//			p[p0] = temp;
//			p0++;
//		}
//
//		printf("end : p1:%d  p2:%d\n", p1, p2);
//
//	}
//	printf("p1:%d  p2:%d\n", p1, p2);
//
//}