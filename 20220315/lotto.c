#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(lotto1)/sizeof(lotto1[0]))

int main(int argc, char *argv[])
{
	int i,j;
	int lotto1[6],lotto2[6],lotto3[6],lotto4[6],lotto5[6];
	
	srand(time(NULL));
	
	
	printf("\n\n");
	
	for(i=0;i<SIZE;i++)
	{
		lotto1[i]=rand()%45+1;
		for(j=0;j<i;j++)
		{
			if(lotto1[i]==lotto1[j])
			{
				lotto1[i]=rand()%45+1;	
			}
			
		}
	}
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",lotto1[i]);
	}
	
	printf("\n\n");
	
	return 0;
}
