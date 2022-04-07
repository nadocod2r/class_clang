#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	double sum=0, num;
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("%d번째 실수를 입력하시오: ", i);
		scanf("%lf",&num);
		
		if(num<0)
		{
			break;
		}
		sum+=num;
	}
	printf("합계 = %.2lf", sum);
		
	return 0;
}
