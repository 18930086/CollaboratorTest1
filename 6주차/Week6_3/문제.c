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
    printf("%d번째 숫자를 입력하세요 : ", i + 1);
    scanf_s("%d", &input[i]);
    if (input[i] > 45 || input[i] < 0) {
      printf("숫자가 너무 크거나 작습니다.\n");
      i--;
    }
  }
  printf("\n");
  printf("입력번호는 %d, %d, %d, %d, %d, %d 입니다\n", input[0], input[1], input[2], input[3], input[4], input[5]);


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
  printf("당첨번호는 %d, %d, %d, %d, %d, %d + %d 입니다\n", Wnum[0], Wnum[1], Wnum[2], Wnum[3], Wnum[4], Wnum[5], Wnum[6]);
  printf("\n");
  if (*countpoint == 6) {
    printf("1등!\n");
  }
  else if (*countpoint == 5) {
    if (Bnum == 1) {
      printf("2등!\n");
    }
    if (Bnum == 0) {
      printf("3등!\n");
    }
  }
  else if (*countpoint == 4) {
    printf("4등!\n");
  }
  else if (*countpoint == 3) {
    printf("5등!\n");
  }
  else {
    printf("꽝.\n");
  }
  return 0;
}