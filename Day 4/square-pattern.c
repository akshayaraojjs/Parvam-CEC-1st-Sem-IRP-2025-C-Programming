#include<stdio.h>
void main(){
    int rows, i;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Sqaure Pattern: \n");

    // for(initialization; condition; increment/decrement)
    // Nested For loop
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            // if we print a symbol, it will print
            // if we print a j value, we will get numbers in horizontal pattern
            // if we print a i value, we will get numbers in vertical pattern
            // printf("* ");
            printf("%d ", j);
            // printf("%d ", i);
        }
        printf("\n");
    }
}

// Tracing:
// i = 1. rows = 3
// Step 1: i <= rows => 1 <= 3 - T
// j = 1, j <= rows => 1 <= 3 - T
// * 
// Step 2: i <= rows => 1 <= 3 - T
// j = 2, j <= rows => 2 <= 3 - T
// * * 
// Step 3: i <= rows => 1 <= 3 - T
// j = 3, j <= rows => 3 <= 3 - T
// * * * 
// Step 4: i <= rows => 1 <= 3 - T
// j = 4, j <= rows => 4 <= 3 - F
// * * * 
// 
// Step 5: i= 2. i <= rows => 2 <= 3 - T
// j = 1, j <= rows => 1 <= 3 - T
// * * * 
// * 
// Step 6: i= 2. i <= rows => 2 <= 3 - T
// j = 2, j <= rows => 2 <= 3 - T
// * * * 
// * * 
// Step 7: i= 2. i <= rows => 2 <= 3 - T
// j = 3, j <= rows => 3 <= 3 - T
// * * * 
// * * * 
// Step 8: i= 2. i <= rows => 2 <= 3 - T
// j = 4, j <= rows => 4 <= 3 - F
// * * * 
// * * * 
// 
// Step 9: i= 3. i <= rows => 3 <= 3 - T
// j = 1, j <= rows => 1 <= 3 - T
// * * * 
// * * * 
// * 
// Step 10: i= 3. i <= rows => 3 <= 3 - T
// j = 2, j <= rows => 2 <= 3 - T
// * * * 
// * * * 
// * * 
// Step 11: i= 3. i <= rows => 3 <= 3 - T
// j = 3, j <= rows => 3 <= 3 - T
// * * * 
// * * * 
// * * * 
// Step 12: i= 3. i <= rows => 3 <= 3 - T
// j = 4, j <= rows => 4 <= 3 - F
// * * * 
// * * * 
// * * * 
// 
// Step 13: i= 4. i <= rows => 4 <= 3 - F
// STOP
// * * * 
// * * * 
// * * * 
// 