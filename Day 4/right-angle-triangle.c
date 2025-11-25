#include<stdio.h>
void main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Right Angled Triangle Pattern: \n");
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("Right Angled Triangle with j value: \n");
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("Right Angled Triangle with i value: \n");
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

// Tracing:
// rows = 3
// Step 1: i = 1, i <= rows => 1 <= 3 - T
// j = 1, j <= i => 1 <= 1 - T
// * 
// Step 2: i = 1, i <= rows => 1 <= 3 - T
// j = 2, j <= i => 2 <= 1 - F
// * 
// 
// Step 3: i = 2, i <= rows => 2 <= 3 - T
// j = 1, j <= i => 1 <= 2 - T
// * 
// * 
// Step 4: i = 2, i <= rows => 2 <= 3 - T
// j = 2, j <= i => 2 <= 2 - T
// * 
// * * 
// Step 5: i = 2, i <= rows => 2 <= 3 - T
// j = 3, j <= i => 3 <= 2 - F
// * 
// * * 
// 
// Step 6: i = 3, i <= rows => 3 <= 3 - T
// j = 1, j <= i => 1 <= 3 - T
// * 
// * * 
// * 
// Step 7: i = 3, i <= rows => 3 <= 3 - T
// j = 2, j <= i => 2 <= 3 - T
// * 
// * * 
// * * 
// Step 8: i = 3, i <= rows => 3 <= 3 - T
// j = 3, j <= i => 3 <= 3 - T
// * 
// * * 
// * * * 
// Step 9: i = 3, i <= rows => 3 <= 3 - T
// j = 4, j <= i => 4 <= 3 - F
// * 
// * * 
// * * * 
// 
// Step 10: i = 4, i <= rows => 4 <= 3 - F
// STOP
// * 
// * * 
// * * * 
// 