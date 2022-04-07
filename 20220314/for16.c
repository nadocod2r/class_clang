#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			continue;
		}
		printf("Á¤¼ö: %d\n",i);
	}
	
	return 0;
}
