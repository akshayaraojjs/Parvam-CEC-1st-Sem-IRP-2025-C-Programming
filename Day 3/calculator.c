#include <stdio.h>
void main()
{
    int num1, num2;
    char operator;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose the operator(+, -, *, / , %)");
    scanf(" %c", &operator);

    switch(operator)
    {
    case '+':
        printf("Sum of %d & %d: %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Difference of %d & %d: %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Product of %d & %d: %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("Quotient for %d & %d: %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("Remainder for %d & %d: %d", num1, num2, num1 % num2);
        break;
    default:
        printf("Invalid Operation");
        break;
    }
}