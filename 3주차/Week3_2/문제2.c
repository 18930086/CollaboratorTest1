#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("���ڸ� �Է��ϼ��� : ");
  scanf_s("%d%d", &num1, &num2);
  if (num1 >= num2); {if ((num1 % num2) == 0) printf("%d�� %d�� ����Դϴ�.", num2, num1);

  else
	printf("����� �ƴմϴ�.");
  }

  return 0;
}