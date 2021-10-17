#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  float dice[7] = { 0, };
  int x;
  int num;
  int n;

  printf("횟수를 입력하십시오 : ");
  scanf_s("%d", &n);

  srand(time(NULL));

  for (x = 1; x <= n; x++) {
	num = 1 + (rand() % 6);
	dice[num]++;
  }
  for (x = 1; x <= 6; x++) {
	printf("%d번 중 주사위 %d가 나온 횟수 : %d\n", n, x, (int)dice[x]);
	printf("%d번 중 주사위 %d가 나올 확률 : %f\n", n, x, dice[x]/n);
  }
  return 0;
}