#include"head.h"

void print(pLQueue pLQ, void* p)
{
	switch (pLQ->type)
	{
	case 1:
		printf("%d\t", *((int*)p));
		break;
	case 2:
		printf("%f\t", *((float*)p));
		break;
	case 3:
		printf("%c\t", *((char*)p));
		break;
	case 4:
		printf("%s\t", ((char*)p));
		break;
	}
}