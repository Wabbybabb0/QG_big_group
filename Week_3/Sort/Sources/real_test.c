#include"head.h"

//插入排序
void test01()
{
	int a[] = { 3,4,100,0,6,7 };
	int size = sizeof(a) / sizeof(a[0]);
	int* test = (int*)malloc(sizeof(int) * size);
	test = insert_sort(a, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", test[i]);
	}
	free(test);
	test = NULL;
}

//快速排序
void test02()
{
	//int a[] = { 3,4,100,0,6,7 };
	srand((unsigned int)time(NULL));
	int a[10000] = { 0 };
	for (int i = 0; i < 10000; i++)
	{
		a[i] = rand();
	}
	int size = sizeof(a) / sizeof(a[0]);
	quick_sort(a, 0, size - 1);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}

//计数排序
void test03()
{
	int a[] = { 0,2,5,3,7,9,10,3,7,6,9,0,0,0 };
	int size = sizeof(a) / sizeof(a[0]);
	int* test = (int*)malloc(sizeof(int) * size);

	test = count_sort(a, size, 10);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", test[i]);
	}
	free(test);
	test = NULL;
}

//基数排序
void test04()
{
	int a[] = { 111,415,328,180,324,454,895,856,637,694,10000,999,0,520 };
	int size = sizeof(a) / sizeof(a[0]);
	radix_count_sort(a, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}

//颜色排序
void test05()
{
	int a[] = { 2,1,2,2,2,2,1,0,2,1,0,1,1,0,2,2,1,1,1,1,0 };
	int size = sizeof(a) / sizeof(a[0]);
	color_sort(a, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}

//无序序列中第X个小/大
void test06()
{
	int a[] = { 5,2,8,4,3,7,6 };
	int size = sizeof(a) / sizeof(a[0]);
	int num = find_x(a, size, 6);
	printf("%d", num);
}

//归并
void test07()
{
	//int a[] = { 3,2,6,5,8,4,7 };
	srand((unsigned int)time(NULL));
	int a[10000] = { 0 };
	for (int i = 0; i < 10000; i++)
	{
		a[i] = rand();
	}
	int size = sizeof(a) / sizeof(a[0]);
	int* temp = (int*)malloc(sizeof(int) * size);
	merge_sort(a, 0, size - 1, temp);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	free(temp);
	temp = NULL;
}