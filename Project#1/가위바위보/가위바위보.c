#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int user;
  int com;
  

  srand(time(NULL));

  printf("-가위바위보-\n");
  printf("0. 가위\n");
  printf("1. 바위\n");
  printf("2. 보\n");
  printf("-----------------\n");
  printf("숫자를 선택하세요: ");
  scanf_s("%d", &user); // 가위바위보 게임인 것을 알려주면서 어떤 숫자를 치면 가위바위보가 제시되는지 알려줌

  // 유저가 숫자를 정해서 가위, 바위, 보 중 하나를 제시하면
  printf("user: ");

  if (user == 0)
  {
	printf("가위\n");
  }
  else if (user == 1)
  {
	printf("바위\n");
  }
  else if (user == 2)
  {
	printf("보\n");
  }

  // 1~3 중 무작위 수를 컴퓨터가 제시
  com = rand() % 3;

  printf("com: ");
  
  if (com == 0)
  {
	printf("가위\n");
  }
  else if (com == 1)
  {
	printf("바위\n");
  }
  else if(com == 2)
  {
	printf("보\n");
  }

  // 유저와 컴퓨터가 제시한 결과에 따라 승패 결정
  printf("-----------------\n");
  if (user == com)
  {
	printf("Draw\n");
  }
  else if (user == 2 && com == 0)
  {
	printf("Lose\n");
  }
  else if (user == 0 && com == 2)
  {
	printf("Win\n");
  }
  else if (user > com)
  {
	printf("Win\n");
  }
  else
  {
	printf("Lose\n");
  }
  
  return 0;
}