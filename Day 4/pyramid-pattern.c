#include<stdio.h>
void main(){
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Pyramid Pattern with star: \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("Pyramid Pattern with j value: \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("Pyramid Pattern with i value: \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

// Tracing:
// rows = 3
// Step 1: i = 1, i <= rows => 1 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 1 => 1 <= 2 - T
//   
// Step 2: i = 1, i <= rows => 1 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 1 => 2 <= 2 - T
//     
// Step 3: i = 1, i <= rows => 1 <= 3 - T
// s = 3, s <= r - i => 3 <= 3 - 1 => 3 <= 2 - F
//     
// Step 4: i = 1, i <= rows => 1 <= 3 - T
// s = 3, s <= r - i => 3 <= 3 - 1 => 3 <= 2 - F
// j = 1, j <= 2*i-1 => 1 <= 2 * 1 - 1 => 1 <= 2 -1 => 1 <= 1 - T
//     * 
// Step 5: i = 1, i <= rows => 1 <= 3 - T
// s = 3, s <= r - i => 3 <= 3 - 1 => 3 <= 2 - F
// j = 2, j <= 2*i-1 => 2 <= 2 * 1 - 1 => 2 <= 2 -1 => 2 <= 1 - F
//     * 
// 
// Step 6: i = 2, i <= rows => 2 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 2 => 1 <= 1 - T
//     * 
//   
// Step 7: i = 2, i <= rows => 2 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 2 => 2 <= 1 - F
//     * 
//   
// Step 8: i = 2, i <= rows => 2 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 2 => 2 <= 1 - F
// j = 1, j <= 2*i-1 => 1 <= 2 * 2 - 1 => 1 <= 4 - 1 => 1 <= 3 - T
// 
//     * 
//   * 
// Step 9: i = 2, i <= rows => 2 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 2 => 2 <= 1 - F
// j = 2, j <= 2*i-1 => 2 <= 2 * 2 - 1 => 2 <= 4 - 1 => 2 <= 3 - T
// 
//     * 
//   * * 
// Step 10: i = 2, i <= rows => 2 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 2 => 2 <= 1 - F
// j = 3, j <= 2*i-1 => 3 <= 2 * 2 - 1 => 3 <= 4 - 1 => 3 <= 3 - T
// 
//     * 
//   * * * 
// Step 11: i = 2, i <= rows => 2 <= 3 - T
// s = 2, s <= r - i => 2 <= 3 - 2 => 2 <= 1 - F
// j = 4, j <= 2*i-1 => 4 <= 2 * 2 - 1 => 4 <= 4 - 1 => 4 <= 3 - F
// 
//     * 
//   * * * 
// 
// Step 12: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 4, j <= 2*i-1 => 4 <= 2 * 2 - 1 => 4 <= 4 - 1 => 4 <= 3 - F
// 
//     * 
//   * * * 
// 
// Step 13: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 1, j <= 2*i-1 => 1 <= 2 * 3 - 1 => 1 <= 6 - 1 => 1 <= 5 - T
// 
//     * 
//   * * * 
// * 
// Step 14: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 2, j <= 2*i-1 => 2 <= 2 * 3 - 1 => 2 <= 6 - 1 => 2 <= 5 - T
// 
//     * 
//   * * * 
// * * 
// Step 15: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 3, j <= 2*i-1 => 3 <= 2 * 3 - 1 => 3 <= 6 - 1 => 3 <= 5 - T
// 
//     * 
//   * * * 
// * * * 
// Step 16: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 4, j <= 2*i-1 => 4 <= 2 * 3 - 1 => 4 <= 6 - 1 => 4 <= 5 - T
// 
//     * 
//   * * * 
// * * * * 
// Step 17: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 5, j <= 2*i-1 => 5 <= 2 * 3 - 1 => 5 <= 6 - 1 => 5 <= 5 - T
// 
//     * 
//   * * * 
// * * * * * 
// Step 18: i = 3, i <= rows => 3 <= 3 - T
// s = 1, s <= r - i => 1 <= 3 - 3 => 1 <= 0 - F
// j = 6, j <= 2*i-1 => 6 <= 2 * 3 - 1 => 6 <= 6 - 1 => 6 <= 5 - F
// 
//     * 
//   * * * 
// * * * * * 
// 
// Step 19: i = 4, i <= rows => 4 <= 3 - F
// STOP
//     * 
//   * * * 
// * * * * * 
// 