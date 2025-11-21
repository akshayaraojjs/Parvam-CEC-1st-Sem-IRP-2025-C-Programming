#include<stdio.h>
void main(){
    int num1 = 10, num2 = 6;
    int andResult, orResult;
    andResult = 10 & 6;
    orResult = 10 | 6;

    printf("%d &(AND) %d: %d\n", num1, num2, andResult);
    printf("%d |(OR) %d: %d", num1, num2, orResult);
}