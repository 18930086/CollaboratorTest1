#include <stdio.h>

int main(void)
{
  int n;
  int V1 = 0, V2 = 1;
  int PV = 0;
  int cnt = 0;

  printf("�� ��° �ױ��� ����ұ��? ");
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
