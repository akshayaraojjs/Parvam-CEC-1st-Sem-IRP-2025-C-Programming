#include <stdio.h>
void main()
{
    int operation;
    int num1, num2;

    do
    {
        printf("Enter any 2 numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("Select any arithmetic operation: \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division for Quotient \n");
        printf("5. Division for Remainder \n");
        printf("6. Exit \n");
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
            printf("Sum of %d & %d: %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Difference of %d & %d: %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Product of %d & %d: %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Quotient for %d & %d: %d\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("Remainder for %d & %d: %d\n", num1, num2, num1 % num2);
            break;
        case 6:
            printf("Thank you for using the Calculator, Good Bye!");
            break;
        default:
            printf("Invalid Operation");
            break;
        }
    } while (operation != 6);
}