// 5! = 5 * 4 * 3 * 2 * 1 = 120
#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1) return 1; // base condition
    return n * factorial(n - 1);
}

void main(){
    int num;

    printf("Enter the number to find the factorial: ");
    scanf("%d", &num);

    printf("Factorial of %d(%d!): %d", num, num, factorial(num));
}

// num = 5
// fact(5)
// Step 1: if(n == 0 || n == 1) => 5 == 0 or 1 - F
// n * fact(n - 1) => 5 * fact(5 - 1) => 5 * fact(4)

// Step 2: if(n == 0 || n == 1) => 4 == 0 or 1 - F
// n * fact(n - 1) => 4 * fact(4 - 1) => 4 * fact(3)

// Step 3: if(n == 0 || n == 1) => 3 == 0 or 1 - F
// n * fact(n - 1) => 3 * fact(3 - 1) => 3 * fact(2)

// Step 4: if(n == 0 || n == 1) => 2 == 0 or 1 - F
// n * fact(n - 1) => 2 * fact(2 - 1) => 2 * fact(1)

// Step 5: if(n == 0 || n == 1) => 1 == 0 or 1 - T, return 1
// n * fact(n - 1) => 1 * fact(1 - 1) => 1 * fact(0)
// fact(1) = 1

// Step 6: if(n == 0 || n == 1) => 0 == 0 or 1 - T, return 1
// fact(0) = 1

// Return to Step 4, 2 * fact(1) => 2 * 1 = 2 (2!)
// Return to Step 3, 3 * fact(2) => 3 * 2 = 6 (3!)
// Return to Step 2, 4 * fact(3) => 4 * 6 = 24 (4!)
// Return to Step 1, 5 * fact(4) => 5 * 24 = 120 (5!)

// print 5! = 120