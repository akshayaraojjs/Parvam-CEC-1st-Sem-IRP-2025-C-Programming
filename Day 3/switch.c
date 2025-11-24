#include<stdio.h>
void main(){
    int day;

    printf("Enter any number b/w 1 to 7: ");
    scanf("%d", &day);

    // For checking multiple conditions we use Switch Statements

    // Why break is needed for each case?
    // To stop the iteration for the respective case
    // If we don't use break, the statement will continue and doesn't stop
    switch(day){
        case 1:
        printf("Day 1: Monday");
        break;
        case 2:
        printf("Day 2: Tuesday");
        break;
        case 3:
        printf("Day 3: Wednesday");
        break;
        case 4:
        printf("Day 4: Thursday");
        break;
        case 5:
        printf("Day 5: Friday");
        break;
        case 6:
        printf("Day 6: Saturday");
        break;
        case 7:
        printf("Day 7: Sunday");
        break;
        default:
        printf("Invalid Input!");
        break;
    }
}