#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


void cal3angle();
void cal4angle();
void calcircle();

int main(void)
{
	int n;
	
	printf("���� ���� : 1�� 3���� 2�� 4���� 3�� �� => ");
	scanf("%d",&n);
	
	if(n==1){
		cal3angle();
	}else if(n==2){
		cal4angle();
	}else if(n==3){
		calcircle();
	}
	
	return 0;
}

void cal3angle()
{
	int a, b;
	double result;
	printf("�غ�, ���̸� �Է� : ");
	scanf("%d%d",&a, &b);
	result = a * b * 0.5;
	printf("�ﰢ�� ���� : %.2lf\n", result);
}
void cal4angle()
{
	int a, b;
	double result;
	printf("�غ�, ���̸� �Է� : ");
	scanf("%d%d", &a, &b);
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
