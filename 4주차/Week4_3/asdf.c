#include <stdio.h>



int main()

{

  int num;

  int value1 = 0, value2 = 1;

  int printValue = 0;

  int cnt = 0;



  printf("�� �ױ��� ����Ϸ��ϴ°�(0�̻��� ��) : ");

  scanf("%d", &num);



  while (cnt != num) {

	printf("%d ", printValue); // ��µ� ��

	printValue = value2; //�ι�° value ���� ����ϱ� ����

	value2 += value1; // �ι�° ���� ù��° ���� ���Ѵ�

	value1 = printValue; // ù��° ���� �ι�° ���� �����Ѵ�.

	cnt++;

  }



  return 0;

}