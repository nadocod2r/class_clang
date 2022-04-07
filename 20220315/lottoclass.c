#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(lotto)/sizeof(lotto[0]))

int main(int argc, char *argv[])
{
	int i,j,k;
	int lotto[6];
	
	srand(time(NULL));
	
	
	printf("\n\n");
	
	for(k=0;k<5;k++)
	{	
		for(i=0;i<SIZE;i++)
		{
			lotto[i] = (rand() % 45) + 1;
			for(j=0;j<i;j++)
			{
				if(lotto[i]==lotto[j])
				{
					lotto[i] = (rand() % 45) + 1;
				}
			}
		}
		
		printf("%d) 로또게임번호 : ",k+1);
		for(i=0;i<SIZE;i++)
		{
			printf("%d ",lotto[i]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}
