#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, j, n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%02d. ¾È³ç ",n++);
			printf("i=%d, j=%d\n",i,j);
		}
	}
	
	return 0;
}
