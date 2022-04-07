#include <stdio.h>
#include <stdlib.h>

int main(int artc, char *argv[])
{
	int i, sum;
	for(i=0;i<10;i++)
	{
		sum = sum + i;
	}
	
	printf("for문이 종료되었습니다.\n");
	printf("sum=%d\n",sum);
	
	return 0;
}
