#include<stdio.h>
void main(){
    int marks;

    printf("Enter your marks:");
    scanf("%d", &marks);

    if(marks > 35 && marks < 60){
        printf("You've passed the exam!");
    } else if(marks >= 60 && marks < 70){
        printf("You've got B grade!");
    } else if(marks >= 70 && marks < 85){
        printf("You've got A grade!");
    } else if(marks >= 85){
        printf("You've got Distinction!");
    } else{
        printf("You've failed in the exam! Please try again");
    }
}