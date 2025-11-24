#include <stdio.h>
void main()
{
    int month;

    printf("Enter any number b/w 1 to 12: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Month 1: January");
        break;
    case 2:
        printf("Month 2: Febraury");
        break;
    case 3:
        printf("Month 3: March");
        break;
    case 4:
        printf("Month 4: April");
        break;
    case 5:
        printf("Month 5: May");
        break;
    case 6:
        printf("Month 6: June");
        break;
    case 7:
        printf("Month 7: July");
        break;
    case 8:
        printf("Month 8: August");
        break;
    case 9:
        printf("Month 9: September");
        break;
    case 10:
        printf("Month 10: October");
        break;
    case 11:
        printf("Month 11: November");
        break;
    case 12:
        printf("Month 12: December");
        break;
    default:
        printf("Invalid Input!");
        break;
    }
}