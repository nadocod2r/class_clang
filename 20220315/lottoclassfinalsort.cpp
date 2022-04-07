#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE (sizeof(lotto)/sizeof(lotto[0]))

int main(int argc, char *argv[])
{
	int i,j,k,x,y,z;
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
					while(lotto[i]==lotto[j])
					{
						lotto[i] = (rand() % 45) + 1;	
					}
					
				}
			}
		}
		
		printf("로또게임번호(임시) : ");
		for(x=0;x<SIZE;x++)
		{
			printf("%d ",lotto[x]);
		}
		
		printf("\n");
		
		for(z=0;z<SIZE;z++)
		{
			for(y=0;y<SIZE-1;y++)
			{
				if(lotto[y]>lotto[y+1])
				{
					int tmp=lotto[y];
					lotto[y]=lotto[y+1];
					lotto[y+1]=tmp;
				}
			}			
		}
		
		printf("로또게임번호(정렬) : ");
		for(x=0;x<SIZE;x++)
		{			
			printf("%d ",lotto[x]);
		}
		
		printf("\n\n");
		
	} //전체5번반복 
	printf("\n\n");
	
	return 0;
}
