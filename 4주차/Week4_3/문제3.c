#include <stdio.h>

int main(void)
{
  int n;
  int V1 = 0, V2 = 1;
  int PV = 0;
  int cnt = 0;

  printf("몇 번째 항까지 출력할까요? ");
  scanf_s("%d", &n);

  while (cnt != n){
	printf("%d ", PV);
	PV = V2;
	V2 += V1;
	V1 = PV;

	cnt++;
  }

  return 0;
}
