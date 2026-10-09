#include<stdio.h>
int main()
{
  int num1, num2, Largest;
  printf("Enter any two numbers: ");
  scanf("%d %d", &num1, &num2);

  if(num1>num2){
    Largest=num1;}
  else{
    Largest=num2;}

  printf("The Largest of two numbers is: %d", Largest);
  
  return 0;
}
