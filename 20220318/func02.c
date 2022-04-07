#include <stdio.h>
#include <stdlib.h>

int add(int, int);
void printChar(char);
void printLine();
void line2Feed();
long long int power(int, int);

int main()
{
	int result;
	long int num3=1234567891;
	long long int num=0, num2=0;
	
	printf("%ld\n",num3);
	num2=9223372036854775806;
	printf("%lld\n",num2);
	
	result = add(10, 20);
	
	line2Feed();
	printf("%d\n", result);
	printLine();
	printChar('A');
	line2Feed();
	num = power(2, 62);
	printf("%lld\n",num);
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

long long int power(int x, int y)
{
	int i;
	long long int result = 1;
	for(i=0;i<y;i++)
	{
		result *=x;
	}
	return result;
}
