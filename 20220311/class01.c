#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int user;
	srand(time(NULL));

	while(1)
	{
		int com = rand()%3;
		
		printf("가위, 바위, 보 게임에 오신것을 환영합니다.\n");
		printf("하나를 선택하세요.(가위-0, 바위-1, 보-2, 게임종료-4)");
		scanf("%d", &user);

		if(user!=4)
		{
			if(com==user)
			{
				printf("사용자=%d\n",user);
				printf("컴퓨터=%d\n",com);
				printf("무승부\n");
			}else if(((com==0)&&(user==1))||((com==1)&&(user==2))||((com==2)&&(user==0))){
				printf("사용자=%d\n",user);
				printf("컴퓨터=%d\n",com);
				printf("사용자 승리\n");
			}else{
				printf("사용자=%d\n",user);
				printf("컴퓨터=%d\n",com);
				printf("사용자 패배\n");
			}
		}else{
			printf("게임을 종료합니다.");
			break;
		}
	}
	return 0;
}
