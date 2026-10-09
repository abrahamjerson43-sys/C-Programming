#include<stdio.h>
int main()
{
  int num1, num2, sum;
  printf("Enter two Numbers: ");
  scanf("%d %d", &num1, &num2);

  sum = num1 + num2;
  printf("The Result = %d", sum);
  return 0;
}
