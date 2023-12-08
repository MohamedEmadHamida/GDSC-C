/*****
 * q3
GDCS ASSINMENT 1
AUTOR MOHAMED EMAD
Swap two numbers .
******/
#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter the frist number :");
  scanf("%d", &num1);

  printf("Enter the second number :");
  scanf(" %d",&num2);

  printf("Frist number = %d , second number = %d \n", num1, num2);
  
  num1 = num2+num1;
  num2=num1-num2;
  num1=num1-num2;

  printf("After swap :  Frist number = %d , second number = %d \n", num1, num2);
  return 0;
}
