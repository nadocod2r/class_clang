#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, j, k;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
//		for(k=0;k<2*(5-i)-1;k++)
//		for(k=9-2*i;k>0;k--)
		for(k=9;k>2*i;k--)
		{				
			printf("*");				
		}		
		printf("\n");
	}
	
	return 0;
}
