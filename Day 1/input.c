#include<stdio.h>
void main(){
    int num;
    float decimal;
    char symbol;

    printf("Enter any integer value: ");
    // For taking the input, we use scanf
    //  =& - ampersand, it will store the address of the variable
    scanf("%d", &num);
    printf("Enter any decimal value: ");
    scanf("%f", &decimal);
    printf("Enter any symbol: ");
    scanf(" %c", &symbol);

    printf("You've given %d for integer, %f for float, %c for Symbol", num, decimal, symbol);
}