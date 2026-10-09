#include<stdio.h>
int main()
{
  int num, rev=0, digit;
  printf("Enter a Number: ");
  scanf("%d", &num);

  for(int i=0; i<=num; i++)
    {
      digit = num % 10;
      rev = rev * 10 + digit;
      num = num / 10;
    }
  printf("The reverse of the given number is: %d", rev);

  return 0;
}
