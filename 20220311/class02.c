#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int user;
	int count=0;

	srand(time(NULL));

	int com=(rand()%100)+1;

	while(1)
	{
		count++;
		printf("���ڸ��߱� �����Դϴ�. 1~100�� ���� �Ѱ��� �����ϼ���.\n");
		scanf("%d", &user);
		printf("\n�õ�Ƚ��(10ȸ��������):%d\n",count);
		printf("����:%d\n",com);

		if(count!=10)
		{
			if(user>com)
			{
				printf("��ǻ�Ͱ� ������ ���ڰ� %d���� �۽��ϴ�.\n",user);
			}else if(user<com){
				printf("��ǻ�Ͱ� ������ ���ڰ� %d���� Ů�ϴ�.\n",user);
			}else if(user==com){
				printf("�����մϴ�! %dȸ ���� �����Դϴ�.\n",count);
				printf("������ �����մϴ�.");
				break;
			}
		}else{
			printf("10ȸ �õ�Ƚ���� �ʰ��Ͽ����ϴ�. ������ �����մϴ�.");
			break;
		}
	}

	return 0;
}
