#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  float dice[7] = { 0, };
  int x;
  int num;
  int n;

  printf("Ƚ���� �Է��Ͻʽÿ� : ");
  scanf_s("%d", &n);

  srand(time(NULL));

  for (x = 1; x <= n; x++) {
	num = 1 + (rand() % 6);
	dice[num]++;
  }
  for (x = 1; x <= 6; x++) {
	printf("%d�� �� �ֻ��� %d�� ���� Ƚ�� : %d\n", n, x, (int)dice[x]);
	printf("%d�� �� �ֻ��� %d�� ���� Ȯ�� : %f\n", n, x, dice[x]/n);
  }
  return 0;
}