#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int stu1[7];
	
	stu1[0]=80;
	stu1[1]=90;
	stu1[2]=70;
	stu1[3]=60;
	stu1[4]=50;
	stu1[5]=100;
	stu1[6]=90;
	
	int i, sum=0;
	double avg;
	
	for(i=0;i<(sizeof(stu1)/sizeof(int));i++)
	{
		sum += stu1[i];
	}
//	int n = (sizeof(stu1))/sizeof(int);
//	printf("%d",n);
	
	printf("\n\n");
	
	avg=(double)sum/(sizeof(stu1)/sizeof(int));
	printf("ÃÑÁ¡ : %d Æò±Õ : %.2lf",sum,avg);
	
	printf("\n\n");
	
	return 0;
}
