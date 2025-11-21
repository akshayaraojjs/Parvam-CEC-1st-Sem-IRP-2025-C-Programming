#include<stdio.h>
void main(){
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    // Ctrl + D: Multiple cursor for same pattern
    printf("Sum of %d & %d: %d\n", num1, num2, sum);
    printf("Difference of %d & %d: %d\n", num1, num2, num1 - num2);
    printf("Product of %d & %d: %d\n", num1, num2,  num1 * num2);
    printf("Quotient of %d & %d: %d\n", num2, num1, num2 / num1);
    // Modulus or Remainder
    printf("Remainder of %d & %d: %d\n", num1, num2, num1 % num2);
}