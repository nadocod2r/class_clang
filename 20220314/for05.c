#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, num;
	
	printf("������ �Է��Ͻÿ�. ");
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
