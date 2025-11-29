#include<stdio.h>

// printNumbers function is calling itself in the function definition
// This process is called as Recursion
void printNumbers(int n){
    if(n == 0) return;
    printNumbers(n - 1);
    printf("%d ", n);
}

void main(){
    int number, number2;

    printf("How many numbers to be printed? Give any 2 numbers: ");
    scanf("%d %d", &number, &number2);

    printNumbers(number);
    printNumbers(number2);
}

// Tracing
// num = 5
// printNumbers(num) => printNumbers(5)
// if(n == 0) => if(5 == 0) - F
// printNumbers(n - 1) => printNumbers(5 - 1) => printNumbers(4)
// print: 5
// if(n == 0) => if(4 == 0) - F
// printNumbers(n - 1) => printNumbers(4 - 1) => printNumbers(3)
// print: 4
// if(n == 0) => if(3 == 0) - F
// printNumbers(n - 1) => printNumbers(3 - 1) => printNumbers(2)
// print: 3
// if(n == 0) => if(2 == 0) - F
// printNumbers(n - 1) => printNumbers(2 - 1) => printNumbers(1)
// print: 2
// if(n == 0) => if(1 == 0) - F
// printNumbers(n - 1) => printNumbers(1 - 1) => printNumbers(0)
// print: 1
// if(n == 0) => if(0 == 0) - T
// Return to previous step

// print: 1 2 3 4 5