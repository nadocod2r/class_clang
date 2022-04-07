#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i=0;
	
	while(i<10)
	{
		printf("%d번 안녕하세요.\n", i);
		i++;
	}
	
	printf("while문이 종료되었습니다.");
	printf("i=%d",i);
	
	return 0;
}
