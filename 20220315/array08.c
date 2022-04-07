#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE (sizeof(lotto)/sizeof(lotto[0]))

int main(int argc, char *argv[])
{
	int i,j;
	int s[2][3]={
		{1,2,3},
		{4,5,6}	
	};
	
	printf("\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	return 0;
}
