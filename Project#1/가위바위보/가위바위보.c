#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int user;
  int com;
  

  srand(time(NULL));

  printf("-����������-\n");
  printf("0. ����\n");
  printf("1. ����\n");
  printf("2. ��\n");
  printf("-----------------\n");
  printf("���ڸ� �����ϼ���: ");
  scanf_s("%d", &user); // ���������� ������ ���� �˷��ָ鼭 � ���ڸ� ġ�� ������������ ���õǴ��� �˷���

  // ������ ���ڸ� ���ؼ� ����, ����, �� �� �ϳ��� �����ϸ�
  printf("user: ");

  if (user == 0)
  {
	printf("����\n");
  }
  else if (user == 1)
  {
	printf("����\n");
  }
  else if (user == 2)
  {
	printf("��\n");
  }

  // 1~3 �� ������ ���� ��ǻ�Ͱ� ����
  com = rand() % 3;

  printf("com: ");
  
  if (com == 0)
  {
	printf("����\n");
  }
  else if (com == 1)
  {
	printf("����\n");
  }
  else if(com == 2)
  {
	printf("��\n");
  }

  // ������ ��ǻ�Ͱ� ������ ����� ���� ���� ����
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