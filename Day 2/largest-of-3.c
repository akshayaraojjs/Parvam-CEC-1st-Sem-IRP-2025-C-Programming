#include<stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2){
        if(num1 > num3){
            printf("%d(Number 1) is greatest of all 3 numbers", num1);
        } else {
            printf("%d(Number 3) is greatest of all 3 numbers", num3);
        }
    } else {
        if(num2 > num3){
            printf("%d(Number 2) is greatest of all 3 numbers", num2);
        } else {
            printf("%d(Number 3) is greatest of all 3 numbers", num3);
        }
    }
}