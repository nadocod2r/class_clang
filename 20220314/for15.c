#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	double sum=0, num;
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i);
		scanf("%lf",&num);
		
		if(num<0)
		{
			break;
		}
		sum+=num;
	}
	printf("�հ� = %.2lf", sum);
		
	return 0;
}
