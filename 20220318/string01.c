#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 'a';
	char ch2[]={'K','O','R','E','A'};
	char ch3[]="HELLO";
	char ch4[3]="WORLD!";
	
	int n1[]={1,2,3,4,5};
	
	
	int i;
	printf("%d\n",sizeof ch2/sizeof ch2[0]);
	printf("%d\n",(sizeof n1/sizeof n1[0]));
	
	
	for(i=0;i<sizeof ch2/sizeof ch2[0];i++)
	{
		printf("%c ",ch2[i]);
	}
	printf("\n");
	for(i=0;i<sizeof ch3/sizeof ch3[0];i++)
	{
		printf("%c ",ch3[i]);
	}
	printf("\n");
	for(i=0;i<sizeof ch4/sizeof ch4[0];i++)
	{
		printf("%c ",ch4[i]);
	}
	printf("\n");
	printf("%s %s %s\n",ch2,ch3,ch4);
	
	return 0;
}
