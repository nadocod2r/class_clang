#include <stdio.h>
#include <stdlib.h>
#define SIZE 26

int main(int argc, char *argv[])
{
	int i;
	char codes[SIZE];
	
	printf("\n\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%3d ",i+1);
	}
	printf("\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%3d ",i+65+32);
	}
	printf("\n");
	
	for(i=0;i<SIZE;i++)
	{
		codes[i]='a'+i;
	}
	
	for(i=0;i<SIZE;i++)
	{
		printf("%3c ",codes[i]);
	}
	printf("\n\n");
	
	return 0;
}
