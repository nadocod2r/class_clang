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
		printf("%2d일째 출석여부입력(출석은 1, 결석은 0): ",i+1);
		scanf("%d",&callbook[i]);
		if(callbook[i]==1)
		{
			count++;
		}
	}
	
	ratio=(double)count/10.0; 
	printf("\n출석률 : %.2lf%%\n",ratio*100);
	if(ratio<0.8)
	{
		printf("출석률 %.2lf%%로 F학점입니다.",ratio*100);
	}
	else
	{
		printf("이번학기 출석이 인정됩니다.");
	}
	
	
	printf("\n\n");
	
	return 0;
}
