#include<stdio.h>

int sumOfNum(int num){
    if(num == 0) return 0; // base condition
    return num + sumOfNum(num - 1);
}

void main(){
    int n;

    printf("Enter the number to find the sum of the numbers: ");
    scanf("%d", &n);

    printf("Sum of 0 to %d is: %d\n", n, sumOfNum(n));
}

// Tracing:
// n = 4
// sumOfNum(4)
// Step 1: if(n == 0) => 4 == 0 - F
// num + sumOfNum(n - 1) => 4 + sumOfNum(4 - 1) => 4 + sumOfNum(3)

// Step 2: if(3 == 0) => 3 == 0 - F
// num + sumOfNum(n - 1) => 3 + sumOfNum(3 - 1) => 3 + sumOfNum(2)

// Step 3: if(2 == 0) => 2 == 0 - F
// num + sumOfNum(n - 1) => 2 + sumOfNum(2 - 1) => 2 + sumOfNum(1)

// Step 4: if(1 == 0) => 1 == 0 - F
// num + sumOfNum(n - 1) => 1 + sumOfNum(1 - 1) => 1 + sumOfNum(0)

// Step 5: if(0 == 0) => 0 == 0 - T
// 0

// Back to 4th step: 1 + 0 = 1 (sumofNum(1)
// Back to 3rd step: 2 + 1 = 3 (sumofNum(2)
// Back to 2nd step: 3 + 3 = 6 (sumofNum(3)
// Back to 1st step: 4 + 6 = 10 (sumofNum(4)
// Print 10