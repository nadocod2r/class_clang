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
	
	printf("i狼 林家: %u\n", &i);
	printf("c狼 林家: %u\n", &c);
	printf("f狼 林家: %u\n", &f);
	printf("\n");
	
	printf("i狼 林家: %u\n", ptri);
	printf("c狼 林家: %u\n", ptrc);
	printf("f狼 林家: %u\n", ptrf);
	printf("\n");
	
	printf("i狼 蔼: %d\n", *ptri);
	printf("c狼 蔼: %c\n", *ptrc);
	printf("f狼 蔼: %.1f\n", *ptrf);
	printf("\n");
	
	return 0;
}

