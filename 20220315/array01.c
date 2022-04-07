#include <stdio.h>
#include <stdlib.h>
#define SIZE (sizeof(arr)/sizeof(int))
#define PI 3.14

int main(int argc, char *argv[])
{
	int i;
	int arr[9];
	
	for(i=0;i<SIZE;i++)
	{
		arr[i]=10;
		printf("%d ",arr[i]);
	}
	
	return 0;
}
