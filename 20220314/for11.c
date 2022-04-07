#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
