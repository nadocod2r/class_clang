#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i=0;
	
	while(1)
	{
		printf("%d�� �ȳ��ϼ���.\n", i);
		i++;
		if(i==10)
		{
			break;
		}
	}
	
	printf("while���� ����Ǿ����ϴ�.");
	printf("i=%d",i);
	
	return 0;
}
