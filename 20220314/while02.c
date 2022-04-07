#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i=0;
	
	while(1)
	{
		printf("%d번 안녕하세요.\n", i);
		i++;
		if(i==10)
		{
			break;
		}
	}
	
	printf("while문이 종료되었습니다.");
	printf("i=%d",i);
	
	return 0;
}
