#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int user;
	srand(time(NULL));

	while(1)
	{
		int com = rand()%3;
		
		printf("����, ����, �� ���ӿ� ���Ű��� ȯ���մϴ�.\n");
		printf("�ϳ��� �����ϼ���.(����-0, ����-1, ��-2, ��������-4)");
		scanf("%d", &user);

		if(user!=4)
		{
			if(com==user)
			{
				printf("�����=%d\n",user);
				printf("��ǻ��=%d\n",com);
				printf("���º�\n");
			}else if(((com==0)&&(user==1))||((com==1)&&(user==2))||((com==2)&&(user==0))){
				printf("�����=%d\n",user);
				printf("��ǻ��=%d\n",com);
				printf("����� �¸�\n");
			}else{
				printf("�����=%d\n",user);
				printf("��ǻ��=%d\n",com);
				printf("����� �й�\n");
			}
		}else{
			printf("������ �����մϴ�.");
			break;
		}
	}
	return 0;
}
