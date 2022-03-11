#include <stdio.h>

int input_n_and_r(int*n,int*r)
{
  printf("Enter the value of n\n");
  scanf("%d",n);
  printf("Enter the value of r\n");
  scanf("%d",r);
}

int factorial(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factorial (n -1);
}

int ncr(int n, int r)
{
  int result;

  result = factorial(n)/ (factorial(r) * factorial(n - r));

  return result;
}

void output(int n, int r, int result)
{
  printf("The Final Result of nCr = %d\n", result);
}

int main()
{
  int n, r, result;
  input_n_and_r(&n,&r);
  factorial(n);
  result = ncr(n,r);
  output(n,r,result);
  return 0;
}