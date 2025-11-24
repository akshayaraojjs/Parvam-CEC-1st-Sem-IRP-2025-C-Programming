#include <stdio.h>
void main()
{
    int choice;

    do{
        printf("Choose any of the option: \n");
        printf("1. Welcome!\n");
        printf("2. Good Morning!\n");
        printf("3. Good Afternoon!\n");
        printf("4. Good Night!\n");
        printf("5. Good Bye!\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Welcome to C Programming IRP\n");
            break;
        case 2:
            printf("Good Morning Students\n");
            break;
        case 3:
            printf("Good Afternoon Students\n");
            break;
        case 4:
            printf("Good Night Students\n");
            break;
        case 5:
            printf("Good Bye Students, Let's meet in Next Sem!\n");
            break;
        default:
            printf("Invalid Choice! Try again");
            break;
        }
    } while (choice != 5);
}