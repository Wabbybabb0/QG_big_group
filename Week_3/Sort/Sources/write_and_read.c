#include"head.h"


void write_(FILE* pF ,int size)
{
	pF = fopen("test.txt", "w");
	if (pF == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	srand((unsigned int)time(NULL));
	int* a = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		fprintf(pF, "%d ", rand());
	}
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	printf("\n***************************************************\n");

	free(a);
	a = NULL;
	fclose(pF);
}

void read_(FILE* pF ,int size)
{
	pF = fopen("test.txt", "r");
	if(pF == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	int* b = (int*)malloc(sizeof(int) * size);

	
	//fread(b, sizeof(int), size, pF);

	for (int i = 0; i < size; i++)
	{
		fscanf_s(pF, "%d", &b[i]);
	}
	/*for (int i = 0; i < size; i++)
	{
		printf("%d ", b[i]);
	}*/

	test1(b, size);
	free(b);
	b = NULL;
	fclose(pF);
}