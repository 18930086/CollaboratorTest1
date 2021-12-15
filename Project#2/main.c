#include <stdio.h>

void CalcLcmGcd(int x, int y, int* pLcm, int* pGcd)
{
  int remainder, quotient, tempx, tempy;
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
  } // x가 y보다 클 경우
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
  } // y가 x보다 클 경우
  *pGcd = (tempx * tempy);
  *pGcd = *pGcd / *pLcm;
}


int main()
{
  int what1 = 0, what2 = 0;
  int num1, num2;
  int* Lcm = &what1, * Gcd = &what2;
  printf("첫 번째 숫자를 입력하세요 : "); // 첫 번째 숫자를 제시
  scanf_s("%d", &num1);
  printf("두 번째 숫자를 입력하세요 : "); // 두 번째 숫자를 제시
  scanf_s("%d", &num2);
  CalcLcmGcd(num1, num2, Lcm, Gcd);
  printf("%d %d", *Lcm, *Gcd);
}