#include <stdio.h>
#include "Display.h"

#pragma warning ( disable : 4996 )

int nDan = 0;

void main()
{
	printf("원하는 단을 입력하세요 ");
	scanf("%d", &nDan);

	DisplayMTable();
}