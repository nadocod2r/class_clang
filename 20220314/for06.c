#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int num, i;
	double sum=0;
	
	
	printf("���� ����: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++)
	{
		sum = sum + (1/(double)i);
	}

	printf("������ ��=%lf",sum);
	
	return 0;
}
