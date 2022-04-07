#include <stdio.h>
#include <stdlib.h>

void printHello();
int HelloNtimes(int n);
void printLine();
void line2Feed();

int main(int argc, char * argv[])
{
	line2Feed();
	printHello();
	printLine();
	HelloNtimes(3);
	line2Feed();
	
	return 0;
}

void printHello(){
	printf("\nHello World!\n");
}
int HelloNtimes(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d. Hello World!\n",i);
	}
}
void printLine()
{
	printf("====================\n");
}
void line2Feed()
{
	printf("\n\n");
}
