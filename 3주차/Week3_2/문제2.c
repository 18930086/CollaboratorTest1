#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("숫자를 입력하세요 : ");
  scanf_s("%d%d", &num1, &num2);
  if (num1 >= num2); {if ((num1 % num2) == 0) printf("%d는 %d의 약수입니다.", num2, num1);

  else
	printf("약수가 아닙니다.");
  }

  return 0;
}