#include <stdio.h>

void CalcLcmGcd(int x, int y, int* pLcm, int* pGcd)
{
  int remainder;
  int quotient;
  int tempx;
  int tempy;
  tempx = x;
  tempy = y;

  if (x > y) {
    remainder = x % y;
    quotient = x / y;
    while (remainder != 0) {
      x = y;
      y = remainder;
      remainder = x % y;
      quotient = x / y;
    }
    *pLcm = y;
  }
  else if (y > x) {
    remainder = y % x;
    quotient = y / x;
    while (remainder != 0) {
      y = x;
      x = remainder;
      remainder = y % x;
      quotient = y / x;
    }
    *pLcm = x;
  }
  else {
    *pLcm = x;
  }
  *pGcd = (tempx * tempy);
  *pGcd = *pGcd / *pLcm;
}


int main(void)
{
  int Wnum1 = 0, Wnum2 = 0;
  int num1, num2;
  int* Lcm = &Wnum1, * Gcd = &Wnum2;
  printf("첫번째 수: ");
  scanf_s("%d", &num1);
  printf("두번째 수: ");
  scanf_s("%d", &num2);
  CalcLcmGcd(num1, num2, Lcm, Gcd);
  printf("%d %d", *Lcm, *Gcd);

  return 0;
}