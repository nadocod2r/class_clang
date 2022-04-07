#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, num;
	
	printf("정수를 입력하시오. ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
