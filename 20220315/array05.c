#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(callbook)/sizeof(callbook[0]))

int main(int argc, char *argv[])
{
	int callbook[10];
	int i, count=0;
	double ratio;
	
	printf("\n\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%2d��° �⼮�����Է�(�⼮�� 1, �Ἦ�� 0): ",i+1);
		scanf("%d",&callbook[i]);
		if(callbook[i]==1)
		{
			count++;
		}
	}
	
	ratio=(double)count/10.0; 
	printf("\n�⼮�� : %.2lf%%\n",ratio*100);
	if(ratio<0.8)
	{
		printf("�⼮�� %.2lf%%�� F�����Դϴ�.",ratio*100);
	}
	else
	{
		printf("�̹��б� �⼮�� �����˴ϴ�.");
	}
	
	
	printf("\n\n");
	
	return 0;
}
