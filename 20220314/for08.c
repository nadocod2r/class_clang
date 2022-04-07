#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i, j, n=1;
	
	for(i=1;i<3;i++)
	{
		for(j=3;j>=1;j--)
		{			
			printf("%d. i=%d, j=%d, ixj=%d\n",n++,i,j,i*j);
		}
	}
	
	return 0;
}
