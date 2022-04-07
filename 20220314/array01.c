#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int s[10];
	int i,k=0;
	
	for(i=0;i<10;i++)
	{
		k++;
		s[i]=k;
		printf("%02d\n",s[i]);
//		k++;
	}		
	return 0;
}
