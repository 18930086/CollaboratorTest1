#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int user1, user2, user3, userC; //������ ������ 2���� �� �� �ϳ�, �׸��� ������ C(Choice)
  int com1, com2, com3 = 0, comC; //��ǻ�Ͱ� ������ 2���� �� �� �ϳ�, �׸��� ��ǻ���� C(Choice)
  

  srand(time(NULL));

  printf("-���������� �ϳ�����-\n");
  printf("0. ����\n");
  printf("1. ����\n");
  printf("2. ��\n");
  printf("-----------------\n");
  printf("���ڸ� 2�� �����ϼ���: ");
  scanf_s("%d", &user1); 
  scanf_s("%d", &user2); // ����, ����, �� �� ������ ���� 2���� ������

  // ������ ���ڸ� ���ؼ� ����, ����, �� �� 2���� �����ϸ�
  printf("user: %d %d", user1, user2);

  if (user1 == 0)
  {
	printf("����\n");
  }
  else if (user1 == 1)
  {
	printf("����\n");
  }
  else if (user1 == 2)
  {
	printf("��\n");
  }
  else if (user2 == 0)
  {
	printf("����\n");
  }
  else if (user2 == 1)
  {
	printf("����\n");
  }
  else if (user2 == 2)
  {
	printf("��\n");
  }

  // 1~3 �� ������ ���� ��ǻ�Ͱ� ����
  com1 = rand() % 3;
  com2 = rand() % 3;

  printf("com: ");

  if (com1 == 0)
  {
	printf("����\n");
  }
  else if (com1 == 1)
  {
	printf("����\n");
  }
  else if (com1 == 2)
  {
	printf("��\n");
  }
  else if (com2 == 0)
  {
	printf("����\n");
  }
  else if (com2 == 1)
  {
	printf("����\n");
  }
  else if (com2 == 2)
  {
	printf("��\n");
  }

  printf("������ ���ðڽ��ϱ�?\n");
  printf("%s %s", &user3);

  scanf_s("%d", &user3);// �� �� �ϳ� ����

  printf("\n");
  if (user3 == 1)
  {
	printf("%s��(��) �����ϴ�.\n\n", user1 == 1 ? "����" : user1 == 2 ? "����" : "��");
	userC = user1;
  }
  else (user3 == 2);
  {
	printf("%s��(��) �����ϴ�.\n\n", user2 == 1 ? "����" : user2 == 2 ? "����" : "��");
	userC = user2;
  }

  if (com3 == 1)
  {
	printf("com�� %s��(��) �����ϴ�.\n\n", com1 == 1 ? "����" : com1 == 2 ? "����" : "��");
	comC = com1;
  }
  else
  {
	printf("com�� %s��(��) �����ϴ�.\n\n", com2 == 1 ? "����" : com2 == 2 ? "����" : "��");
	comC = com2;
  }
  
  // ������ ��ǻ�Ͱ� ������ ����� ���� ���� ����
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