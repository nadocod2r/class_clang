#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 5

int main(int argc, char *argv[])
{
	int i, sum=0;
	double avg;
	int scores[STUDENTS];
	
	printf("\n\n");
	
	for(i=0;i<STUDENTS;i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d",&scores[i]);
	}
	printf("\n");
	
	for(i=0;i<STUDENTS;i++)
	{
		sum+=scores[i];
	}
	
	avg=(double)sum/STUDENTS;
	printf("���� ���=%.2lf\n",avg);
	
	printf("\n\n");
	
	return 0;
}
