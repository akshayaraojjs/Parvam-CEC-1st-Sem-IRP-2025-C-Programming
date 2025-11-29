// 2 ^ 3 = 8, 5 ^ 3 = 125
#include<stdio.h>

int power(int b, int p){
    if(p == 0) return 1; // base condition
    return b * power(b, p - 1);
}

void main(){
    int base, exp;

    printf("Enter the base number and power number: ");
    scanf("%d %d", &base, &exp);

    printf("%d ^ %d: %d", base, exp, power(base, exp));
}

// Tracing:
// base = 3, power = 4
// pow(3, 4)

// Step 1: if(p == 0) => 4 == 0 - F
// b * pow(b , p - 1) => 3 * pow(3, 4 - 1) => 3 * pow(3, 3)

// Step 2: if(p == 0) => 3 == 0 - F
// b * pow(b , p - 1) => 3 * pow(3, 3 - 1) => 3 * pow(3, 2)

// Step 3: if(p == 0) => 2 == 0 - F
// b * pow(b , p - 1) => 3 * pow(3, 2 - 1) => 3 * pow(3, 1)

// Step 4: if(p == 0) => 1 == 0 - F
// b * pow(b , p - 1) => 3 * pow(3, 1 - 1) => 3 * pow(3, 0)

// Step 5: if(p == 0) => 0 == 0 - T, return 1
// pow(3, 0) = 1

// Return to 4th Step: 3 * pow(3, 0) => 3 * 1 = 3 
// pow(3, 1) = 3

// Return to 3rd Step: 3 * pow(3, 1) => 3 * 3 = 9 
// pow(3, 2) = 9

// Return to 2nd Step: 3 * pow(3, 2) => 3 * 9 = 27 
// pow(3, 3) = 27

// Return to 1st Step: 3 * pow(3, 3) => 3 * 27 = 81 
// pow(3, 4) = 81

// print: 81