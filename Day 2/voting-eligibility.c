#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age > 0){
        if(age >= 18){
            printf("You can vote in the election");
        } else {
            printf("You need to grow up to vote");
        }
    } else {
        printf("Invalid age!");
    }
}