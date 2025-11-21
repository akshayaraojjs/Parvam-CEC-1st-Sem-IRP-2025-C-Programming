#include<stdio.h>
void main(){
    int num1, num2, num3;

    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Syntax:
    // (condition) ? True : False

    // check even or odd
    (num1 % 2 == 0) 
    ? printf("%d is an even number\n", num1) 
    : printf("%d is an odd number\n", num1);

    // check greatest of 2 numbers
    (num1 > num2) 
    ? printf("%d is greater than %d\n", num1, num2)
    : printf("%d is lesser than %d\n", num1, num2);

    // check for greatest of 3 numbers (Nested Ternary Operator)
    // syntax:
    // (condition 1) 
    // ? (condition 1-1) ? True (1-1) : False (1-1)
    // : (condition 1-2) ? True (1-2) : False (1-2)
    (num1 > num2)
    ? (num1 > num3)
       ? printf("%d (num1) is greater than other numbers\n", num1)
       : printf("%d (num3) is greater than other numbers\n", num3)
    : (num2 > num3)
       ? printf("%d (num2) is greater than other numbers\n", num2)
       : printf("%d (num3) is greater than other numbers\n", num3);
}