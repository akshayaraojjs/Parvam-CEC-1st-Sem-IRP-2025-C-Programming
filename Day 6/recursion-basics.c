#include<stdio.h>

// Recursion is a process where the function will call itself.

void printEvenNumbers(int n){
    if(n == 0) return; // base condition
    printEvenNumbers(n - 1);
    if(n % 2 == 0){
        printf("%d ", n);
    }
}

void main(){
    int num;

    printf("Enter the number of even numbers to be printed: ");
    scanf("%d", &num);

    printEvenNumbers(num);
}

// num = 10

// n = 10
// Step 1:  pen(10)
// if(n == 0) => 10 == 0 - F
// pen(10 - 1) => pen(9)
// if(n % 2 == 0) => 10 % 2 == 0 - T
// print: 10

// Step 2: pen(9)
// if(n == 0) => 9 == 0 - F
// pen(9 - 1) => pen(8)
// if(n % 2 == 0) => 9 % 2 == 0 - F

// Step 3: pen(8)
// if(n == 0) => 8 == 0 - F
// pen(8 - 1) => pen(7)
// if(n % 2 == 0) => 8 % 2 == 0 - T
// print: 8

// Step 4: pen(7)
// if(n == 0) => 7 == 0 - F
// pen(7 - 1) => pen(6)
// if(n % 2 == 0) => 7 % 2 == 0 - F

// Step 5: pen(6)
// if(n == 0) => 6 == 0 - F
// pen(6 - 1) => pen(5)
// if(n % 2 == 0) => 6 % 2 == 0 - T
// print: 6

// Step 6: pen(5)
// if(n == 0) => 5 == 0 - F
// pen(5 - 1) => pen(4)
// if(n % 2 == 0) => 5 % 2 == 0 - F

// Step 7: pen(4)
// if(n == 0) => 4 == 0 - F
// pen(4 - 1) => pen(3)
// if(n % 2 == 0) => 4 % 2 == 0 - T
// print: 4

// Step 8: pen(3)
// if(n == 0) => 3 == 0 - F
// pen(3 - 1) => pen(2)
// if(n % 2 == 0) => 3 % 2 == 0 - F

// Step 8: pen(2)
// if(n == 0) => 2 == 0 - F
// pen(2 - 1) => pen(1)
// if(n % 2 == 0) => 2 % 2 == 0 - T
// print: 2

// Step 8: pen(1)
// if(n == 0) => 2 == 0 - F
// pen(1 - 1) => pen(0)
// if(n % 2 == 0) => 1 % 2 == 0 - F

// Step 8: pen(0)
// if(n == 0) => 0 == 0 - T
// return to previous step

// print: 2 4 6 8 10