#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int Wnum[7];
  int input[6] = { 0,0,0,0,0,0 };
  int Bnum = 0;
  int* countpoint;
  int count = 0;
  countpoint = &count;
  int ii = 0;

  for (int i = 0; i < 7; i++) {
    int random = rand() % 46;
    Wnum[i] = random;
  }

  for (int i = 0; i < 6; i++) {
    printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
    scanf_s("%d", &input[i]);
    if (input[i] > 45 || input[i] < 0) {
      printf("���ڰ� �ʹ� ũ�ų� �۽��ϴ�.\n");
      i--;
    }
  }
  printf("\n");
  printf("�Է¹�ȣ�� %d, %d, %d, %d, %d, %d �Դϴ�\n", input[0], input[1], input[2], input[3], input[4], input[5]);


  for (int ii = 0; ii < 6; ii++) {
    for (int i = 0; i < 6; i++) {
      if (input[ii] == Wnum[i]) {
        *countpoint = *countpoint + 1;
      }
    }
  }

  for (int i = 0; i < 6; i++)
  {
    if (input[i] = Wnum[6])
    {
      Bnum++;
    }
  }
 
  printf("\n");
  printf("��÷��ȣ�� %d, %d, %d, %d, %d, %d + %d �Դϴ�\n", Wnum[0], Wnum[1], Wnum[2], Wnum[3], Wnum[4], Wnum[5], Wnum[6]);
  printf("\n");
  if (*countpoint == 6) {
    printf("1��!\n");
  }
  else if (*countpoint == 5) {
    if (Bnum == 1) {
      printf("2��!\n");
    }
    if (Bnum == 0) {
      printf("3��!\n");
    }
  }
  else if (*countpoint == 4) {
    printf("4��!\n");
  }
  else if (*countpoint == 3) {
    printf("5��!\n");
  }
  else {
    printf("��.\n");
  }
  return 0;
}