#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, j;
	
	for(i=2;i<10;i++)
	{
		printf("===%d´Ü===",i);
		printf("\n");
		
		for(j=1;j<10;j++)
		{
			printf("%d x %d = %02d\n",i,j,i*j);
		}
		printf("\n");
	}	
	
	return 0;
}
