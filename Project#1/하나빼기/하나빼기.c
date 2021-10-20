#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int user1, user2, user3, userC; //유저가 제시할 2개와 뺄 것 하나, 그리고 유저의 C(Choice)
  int com1, com2, com3 = 0, comC; //컴퓨터가 제시할 2개와 뺄 것 하나, 그리고 컴퓨터의 C(Choice)
  

  srand(time(NULL));

  printf("-가위바위보 하나빼기-\n");
  printf("0. 가위\n");
  printf("1. 바위\n");
  printf("2. 보\n");
  printf("-----------------\n");
  printf("숫자를 2개 선택하세요: ");
  scanf_s("%d", &user1); 
  scanf_s("%d", &user2); // 가위, 바위, 보 중 무엇을 낼지 2개를 선택함

  // 유저가 숫자를 정해서 가위, 바위, 보 중 2개를 제시하면
  printf("user: %d %d", user1, user2);

  if (user1 == 0)
  {
	printf("가위\n");
  }
  else if (user1 == 1)
  {
	printf("바위\n");
  }
  else if (user1 == 2)
  {
	printf("보\n");
  }
  else if (user2 == 0)
  {
	printf("가위\n");
  }
  else if (user2 == 1)
  {
	printf("바위\n");
  }
  else if (user2 == 2)
  {
	printf("보\n");
  }

  // 1~3 중 무작위 수를 컴퓨터가 제시
  com1 = rand() % 3;
  com2 = rand() % 3;

  printf("com: ");

  if (com1 == 0)
  {
	printf("가위\n");
  }
  else if (com1 == 1)
  {
	printf("바위\n");
  }
  else if (com1 == 2)
  {
	printf("보\n");
  }
  else if (com2 == 0)
  {
	printf("가위\n");
  }
  else if (com2 == 1)
  {
	printf("바위\n");
  }
  else if (com2 == 2)
  {
	printf("보\n");
  }

  printf("무엇을 빼시겠습니까?\n");
  printf("%s %s", &user3);

  scanf_s("%d", &user3);// 둘 중 하나 선택

  printf("\n");
  if (user3 == 1)
  {
	printf("%s을(를) 뺐습니다.\n\n", user1 == 1 ? "가위" : user1 == 2 ? "바위" : "보");
	userC = user1;
  }
  else (user3 == 2);
  {
	printf("%s을(를) 뺐습니다.\n\n", user2 == 1 ? "가위" : user2 == 2 ? "바위" : "보");
	userC = user2;
  }

  if (com3 == 1)
  {
	printf("com이 %s을(를) 뺐습니다.\n\n", com1 == 1 ? "가위" : com1 == 2 ? "바위" : "보");
	comC = com1;
  }
  else
  {
	printf("com이 %s을(를) 뺐습니다.\n\n", com2 == 1 ? "가위" : com2 == 2 ? "바위" : "보");
	comC = com2;
  }
  
  // 유저와 컴퓨터가 제시한 결과에 따라 승패 결정
  printf("-----------------\n");
  if (userC == comC)
  {
	printf("Draw\n");
  }
  else if (userC == 2 && comC == 0)
  {
	printf("Lose\n");
  }
  else if (userC == 0 && comC == 2)
  {
	printf("Win\n");
  }
  else if (userC > comC)
  {
	printf("Win\n");
  }
  else
  {
	printf("Lose\n");
  }

  return 0;
}