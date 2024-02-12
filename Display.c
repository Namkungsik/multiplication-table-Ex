#include <stdio.h>
#include "Display.h"

extern int nDan;

void DisplayMTable()
{
	for (int i = 1; i < 10; i++)
	{
		printf("%2d X %2d = %2d \n", nDan, i, nDan * i);
	}
	printf("%d단의 마지막 전 값은 %d", nDan, nDan * 8);
}