#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(prices)/sizeof(prices[0]))

int main(int argc, char *argv[])
{
	int i, search, flag;
	int prices[]={10,20,30,40,50,60,70,80,90,100};
	
	printf("\n\n");
	
	printf("Ž���� ���� �Է��Ͻÿ� : ");
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
	printf("Ž�� ���� index=%d, ������ (%d)��°\n",i,i+1);
	printf("\n");
	printf("Ž�� ���� index=%d\n",flag);
	
	printf("\n\n");
	
	return 0;
}
