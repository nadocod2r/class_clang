#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(prices)/sizeof(prices[0]))

int main(int argc, char *argv[])
{
	int min, i;
	int prices[10];
	
	printf("\n\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("�����Է� : ");
		scanf("%d", &prices[i]);		
	}
	
	min=prices[0];
	
	for(i=0;i<SIZE;i++)
	{		
		if(min>prices[i])
		{
			min=prices[i];
		}
	}
	
	printf("�ּҰ� : %d\n",min);
	
	printf("\n\n");
	
	return 0;
}
