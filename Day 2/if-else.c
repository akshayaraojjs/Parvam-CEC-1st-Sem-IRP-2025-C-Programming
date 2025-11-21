#include<stdio.h>
void main(){
    int number;

    printf("Enter any number:");
    scanf("%d", &number);
    // If Statement
    if(number > 0){
        printf("%d is Positive Number!\n", number);
    }

    // If Else Statement
    if(number > 0){
        printf("%d is Positive Number!\n", number);
    } else {
        printf("%d is Negative Number!\n", number);
    }
    
    // If Else Ladder
    if(number > 0){
        printf("%d is Positive Number!\n", number);
    } else if(number < 0) {
        printf("%d is Negative Number!\n", number);
    } else{
        printf("%d is not a Number!", number);
    }
}