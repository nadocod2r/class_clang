#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 10;
	char c = 65;
	float f = 12.3;
	
	int* ptri=&i;
	char* ptrc=&c;
	float* ptrf=&f;
	
	printf("i�� �ּ�: %u\n", &i);
	printf("c�� �ּ�: %u\n", &c);
	printf("f�� �ּ�: %u\n", &f);
	printf("\n");
	
	printf("i�� �ּ�: %u\n", ptri);
	printf("c�� �ּ�: %u\n", ptrc);
	printf("f�� �ּ�: %u\n", ptrf);
	printf("\n");
	
	printf("i�� ��: %d\n", *ptri);
	printf("c�� ��: %c\n", *ptrc);
	printf("f�� ��: %.1f\n", *ptrf);
	printf("\n");
	
	return 0;
}

