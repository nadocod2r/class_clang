#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void cal3angle();
void cal4angle();
void calcircle();
void printLine();
void calc();

int main(void)
{
	calc();
	
	return 0;
}

void cal3angle()
{
	int a, b;
	double result;
	printf("�غ� �Է� : ");
	scanf("%d",&a);
	printf("���� �Է� : ");
	scanf("%d",&b);
	result = a * b * 0.5;
	printf("�ﰢ�� ���� : %.2lf\n", result);
}
void cal4angle()
{
	int a, b;
	double result;
	printf("�غ� �Է� : ");
	scanf("%d",&a);
	printf("���� �Է� : ");
	scanf("%d",&b);
	result = a * b;
	printf("�簢�� ���� : %.2lf\n", result);
}
void calcircle()
{
	int a;
	double result;
	printf("������ �Է� : ");
	scanf("%d",&a);
	
	result = (double)PI * a * a;
	printf("���� ���� : %.2lf\n",result);
}
void printLine()
{
	printf("==============================\n");
}
void calc()
{
	while(1)
	{
		printf("������� ���α׷� ���� => \n");
		
		int n;
	
		printf("���� ���� : 1�� 3����, 2�� 4����, 3�� �� 4�� ���� => ");
		scanf("%d",&n);
		
		if(n==1){
			cal3angle();
		}else if(n==2){
			cal4angle();
		}else if(n==3){
			calcircle();
		}else if(n==4){
			break;
		}else{	
			printf("1, 2, 3, 4�� �߿��� �Է��Ͻÿ�.\n");
		}
		printLine();
		printf("\n\n");
	}
}
