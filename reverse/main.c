/*****
 * q5
GDCS ASSINMENT 1
AUTOR MOHAMED EMAD
 .
******/
#include <stdio.h>

int main() {
  int num, digits[3];

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  // Converting the number to an array of digits
  digits[0] = num / 100;
  digits[1] = (num / 10) % 10;
  digits[2] = num % 10;

  // Printing the number in reverse order
  printf("Reversed number: %d%d%d\n", digits[2], digits[1], digits[0]);

  return 0;
}