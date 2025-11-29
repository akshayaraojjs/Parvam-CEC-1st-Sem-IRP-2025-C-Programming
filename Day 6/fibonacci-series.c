// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 55 89
// Sum of Previous 2 numbers: Fibonacci Series
#include<stdio.h>

int fibonacciSeries(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacciSeries(n - 2) + fibonacciSeries(n - 1);
}

void printFibonacci(int n){
    for(int i = 0; i < n; i++){
        printf("%d ", fibonacciSeries(i));
    }
}

void main(){
    int num;

    printf("Enter the number to print the fibonacci series: ");
    scanf("%d", &num);

    // To check w.r.t index, we can give n - 1 or to check with number itself, we can give n
    printf("Fibonacci Number at %d position: %d\n", num, fibonacciSeries(num - 1));
    printf("Fibonacci Series for the given number %d: \n", num);
    printFibonacci(num);
}

// Tracing:

// num = 5

// fib(5)
// Step 1: if(n == 0) => 5 == 0 - F
// if(n == 1) => 5 == 1 - F
// fib(n - 2) + fib(n - 1) => fib(5 - 2) + fib(5 - 1) => fib(3) + fib(4)

// Step 2: if(4 == 0) => 4 == 0 - F
// if(n == 1) => 4 == 1 - F
// fib(4 - 2) + fib(4 - 1) => fib(2) + fib(3)

// Step 3: if(3 == 0) => 3 == 0 - F
// if(n == 1) => 3 == 1 - F
// fib(3 - 2) + fib(3 - 1) => fib(1) + fib(2)

// Step 4: if(2 == 0) => 2 == 0 - F
// if(n == 1) => 2 == 1 - F
// fib(2 - 2) + fib(2 - 1) => fib(0) + fib(1)

// Step 5: if(1 == 0) => 1 == 0 - F
// if(n == 1) => 1 == 1 - T, return 1
// fib(1 - 2) + fib(1 - 1) => fib(0)
// fib(1) = 1

// Step 6: if(0 == 0) => 0 == 0 - T, return 0
// fib(0) = 0

// Return to Step 4, fib(0) + fib(1) => 0 + 1 = 1 => fib(2) = 1
// Return to Step 3, fib(1) + fib(2) => 1 + 1 = 2 => fib(3) = 2
// Return to Step 2, fib(2) + fib(3) => 1 + 2 = 3 => fib(4) = 3
// Return to Step 1, fib(3) + fib(4) => 2 + 3 = 5 => fib(5) = 5

// print: 0 1 1 2 3