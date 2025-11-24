#include<stdio.h>
void main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    // Syntax:
    // for(initialization; condition; increment/decrement)
    printf("The numbers from 0 to %d: \n", num);
    for(int i=0; i <= num; i++){
        printf("%d\n", i);
    }
}