#include<stdio.h>
void main(){
    int num, rev=0, rem=0;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Original Number: %d\n", num);
    
    while(num > 0){
        rem = num % 10; 
        rev = rev * 10 + rem;
        // rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("Reversed Number: %d", rev);
}

// Tracing:
// num = 2025, rev = 0, rem = 0
// Step 1: num > 0 => 2025 > 0 - T
// rem = num % 10 => 2025 % 10 => 5
// rev = rev * 10 + rem => 0 * 10 + 5 => 5
// num = num / 10 => 2025 / 10 => 202
// ------------------------------------------
// Step 2: num > 0 => 202 > 0 - T
// rem = num % 10 => 202 % 10 => 2
// rev = rev * 10 + rem => 5 * 10 + 2 => 52
// num = num / 10 => 202 / 10 => 20
// ------------------------------------------
// Step 3: num > 0 => 20 > 0 - T
// rem = num % 10 => 20 % 10 => 0
// rev = rev * 10 + rem => 52 * 10 + 0 => 520
// num = num / 10 => 20 / 10 => 2
// ------------------------------------------
// Step 4: num > 0 => 2 > 0 - T
// rem = num % 10 => 2 % 10 => 2
// rev = rev * 10 + rem => 520 * 10 + 2 => 5202
// num = num / 10 => 2 / 10 => 0
// ------------------------------------------
// Step 5: num > 0 => 0 > 0 - F
// STOP
// rev = 5202