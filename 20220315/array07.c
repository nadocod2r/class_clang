#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(prices)/sizeof(prices[0]))

int main(int argc, char *argv[])
{
	int i, search, flag;
	int prices[]={10,20,30,40,50,60,70,80,90,100};
	
	printf("\n\n");
	
	printf("탐색할 값을 입력하시오 : ");
	scanf("%d",&search);
	
	for(i=0;i<SIZE;i++)
	{
		if(prices[i]==search)
		{
			flag=i;
			break;
		}
	}
	printf("\n");
	printf("탐색 성공 index=%d, 순서는 (%d)번째\n",i,i+1);
	printf("\n");
	printf("탐색 성공 index=%d\n",flag);
	
	printf("\n\n");
	
	return 0;
}
