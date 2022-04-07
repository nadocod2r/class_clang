#include <stdio.h>
#include <stdlib.h>

void newLine();
void swap(int*, int*);

int main(void)
{
	int a=100, b=200;
	
	newLine();
	printf("변경전 : a=%d, b=%d\n",a ,b);
	swap(&a, &b);
	printf("변경후 : a=%d, b=%d\n",a, b);
	newLine();
	
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
void newLine()
{
	printf("\n\n");
}
