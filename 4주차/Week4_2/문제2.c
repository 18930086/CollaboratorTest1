#include<stdio.h>

int rec_func(int n);

int main(void)
{
  int n;
  scanf_s("%d", &n);

  printf("%d", rec_func(n));
  return 0;
}

int rec_func(int n)
{
  int sum = 0;
  if (n == 1) return 1;
  sum = n + rec_func(n - 1);;

  return sum;
}