#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


void cal3angle();
void cal4angle();
void calcircle();

int main(void)
{
	int n;
	
	printf("도형 선택 : 1번 3각형 2번 4각형 3번 원 => ");
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
	printf("밑변, 높이를 입력 : ");
	scanf("%d%d",&a, &b);
	result = a * b * 0.5;
	printf("삼각형 넓이 : %.2lf\n", result);
}
void cal4angle()
{
	int a, b;
	double result;
	printf("밑변, 높이를 입력 : ");
	scanf("%d%d", &a, &b);
	result = a * b;
	printf("사각형 넓이 : %.2lf\n", result);
}
void calcircle()
{
	int a;
	double result;
	printf("반지름 입력 : ");
	scanf("%d",&a);
	
	result = (double)PI * a * a;
	printf("원의 넓이 : %.2lf\n",result);
}
