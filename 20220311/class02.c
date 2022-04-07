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
		printf("숫자맞추기 게임입니다. 1~100의 수중 한개를 선택하세요.\n");
		scanf("%d", &user);
		printf("\n시도횟수(10회까지가능):%d\n",count);
		printf("정답:%d\n",com);

		if(count!=10)
		{
			if(user>com)
			{
				printf("컴퓨터가 생각한 숫자가 %d보다 작습니다.\n",user);
			}else if(user<com){
				printf("컴퓨터가 생각한 숫자가 %d보다 큽니다.\n",user);
			}else if(user==com){
				printf("축하합니다! %d회 만에 정답입니다.\n",count);
				printf("게임을 종료합니다.");
				break;
			}
		}else{
			printf("10회 시도횟수를 초과하였습니다. 게임을 종료합니다.");
			break;
		}
	}

	return 0;
}
