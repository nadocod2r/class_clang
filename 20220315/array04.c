#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 10
#define SIZE (sizeof(arr)/sizeof(arr[0]))

int main(int argc, char *argv[])
{
	int i;
	int scores[STUDENTS]={100,90,70};
	int arr[]={1,2,3,4,5,6,7,8,9};
	
	printf("\n\n");
	
	for(i=0;i<STUDENTS;i++)
	{
		printf("%d ",scores[i]);
	}
	
	printf("\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\n");
	
	return 0;
}
