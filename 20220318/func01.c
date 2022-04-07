#include <stdio.h>
#include <stdlib.h>

int add(int, int);
void printChar(char);
void printLine();
void line2Feed();

int main(int argc, char *argv[])
{
	int result;
	result = add(10, 20);
	
	line2Feed();
	printf("%d\n", result);
	printLine();
	printChar('A');
	line2Feed();
	
	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
void printChar(char a)
{
	printf("%c : %d", a, a);
}
void printLine()
{
	printf("====================\n");
}
void line2Feed()
{
	printf("\n\n");
}
