#include"head.h"

int get_length(pLQueue pLQ)
{
	if (!is_empty(pLQ))
	{
		return pLQ->length;
	}
	else
	{
		printf("╤сапн╙©уё║\n");
	}
}