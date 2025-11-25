#include<stdio.h>
void main(){
    int rows;

    printf("Enter the number of rows(odd number): ");
    scanf("%d", &rows);

    // Top Pyramid
    printf("Diamond Pattern with star:\n");
    for(int i=1; i<=rows; i=i+2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    // Bottom Inverse Pyramid
    for(int i=rows-2; i>=1; i=i-2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    // Top Pyramid
    printf("Diamond Pattern with j value:\n");
    for(int i=1; i<=rows; i=i+2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Bottom Inverse Pyramid
    for(int i=rows-2; i>=1; i=i-2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    // Top Pyramid
    printf("Diamond Pattern with i value:\n");
    for(int i=1; i<=rows; i=i+2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    
    // Bottom Inverse Pyramid
    for(int i=rows-2; i>=1; i=i-2){
        for(int space=1; space<=(rows - i)/ 2; space++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

// Tracing:
// rows = 5
// Step 1: i = 1, i <= rows => 1 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 1)/2 => 1 <= 2 - T
//   
// Step 2: i = 1, i <= rows => 1 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 2 - T
//     
// Step 3: i = 1, i <= rows => 1 <= 5 - T
// s=3; s<=(rows - i)/ 2 => 3 <= 2 - F
//     
// Step 4: i = 1, i <= rows => 1 <= 5 - T
// s=3; s<=(rows - i)/ 2 => 3 <= 2 - F
// j=1; j<=i => 1 <= 1 - T
//     * 
// Step 5: i = 1, i <= rows => 1 <= 5 - T
// s=3; s<=(rows - i)/ 2 => 3 <= 2 - F
// j=2; j<=i => 2 <= 1 - F
//     * 
// 
// Step 6: i = 3, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 3)/2 => 1 <= 1 - T
//     * 
//   
// Step 7: i = 3, i <= rows => 3 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 1 - F
//     * 
//   
// Step 8: i = 3, i <= rows => 3 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 1 - F
// j=1; j<=i => 1 <= 3 - T
//     * 
//   * 
// Step 9: i = 3, i <= rows => 3 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 1 - F
// j=2; j<=i => 2 <= 3 - T
//     * 
//   * * 
// Step 10: i = 3, i <= rows => 3 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 1 - F
// j=3; j<=i => 3 <= 3 - T
//     * 
//   * * *
// Step 11: i = 3, i <= rows => 3 <= 5 - T
// s=2; s<=(rows - i)/ 2 => 2 <= 1 - F
// j=4; j<=i => 4 <= 3 - F
//     * 
//   * * *
// 
// Step 12: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
//     * 
//   * * *
// 
// Step 13: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=1; j<=i => 1 <= 5 - T
//     * 
//   * * *
// * 
// Step 14: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=2; j<=i => 2 <= 5 - T
//     * 
//   * * *
// * * 
// Step 15: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=3; j<=i => 3 <= 5 - T
//     * 
//   * * *
// * * * 
// Step 16: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=4; j<=i => 4 <= 5 - T
//     * 
//   * * *
// * * * * 
// Step 17: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=5; j<=i => 5 <= 5 - T
//     * 
//   * * *
// * * * * * 
// Step 18: i = 5, i <= rows => 3 <= 5 - T
// s=1; s<=(rows - i)/ 2 => 1 <= (5 - 5)/2 => 1 <= 0- F
// j=6; j<=i => 6 <= 5 - f
//     * 
//   * * *
// * * * * * 
// 
// Step 19: i = 7, i <= rows => 7 <= 5 - F
// STOP
//     * 
//   * * *
// * * * * * 
// 
// Inverse Pyramid
// i=rows-2; i>=1; i=i-2  || space=1; space<=(rows - i)/ 2
// rows = 5
// Step 1: i = 5 - 2 => i = 3, 3>=1 - T
// s = 1, 1 <= (5 - 3)/2 => 1 <= 1 - T
//     * 
//   * * *
// * * * * * 
//   
// Step 2: i = 5 - 2 => i = 3, 3>=1 - T
// s = 2, 1 <= (5 - 3)/2 => 2 <= 1 - F
//     * 
//   * * *
// * * * * * 
//   
// Step 3: i = 5 - 2 => i = 3, 3>=1 - T
// s = 2, 1 <= (5 - 3)/2 => 2 <= 1 - F
// j = 1, j <= i => 1 <= 3 - T
//     * 
//   * * *
// * * * * * 
//   * 
// Step 4: i = 5 - 2 => i = 3, 3>=1 - T
// s = 2, 1 <= (5 - 3)/2 => 2 <= 1 - F
// j = 2, j <= i => 2 <= 3 - T
//     * 
//   * * *
// * * * * * 
//   * * 
// Step 5: i = 5 - 2 => i = 3, 3>=1 - T
// s = 2, 1 <= (5 - 3)/2 => 2 <= 1 - F
// j = 3, j <= i => 3 <= 3 - T
//     * 
//   * * *
// * * * * * 
//   * * * 
// Step 6: i = 5 - 2 => i = 3, 3>=1 - T
// s = 2, 1 <= (5 - 3)/2 => 2 <= 1 - F
// j = 4, j <= i => 4 <= 3 - F
//     * 
//   * * *
// * * * * * 
//   * * * 
// 
// Step 7: i = 3 - 2 => i = 1, 1 >= 1 - T
// s = 1, 1 <= (5 - 1)/2 => 1 <= 2 - T
//     * 
//   * * *
// * * * * * 
//   * * * 
//   
// Step 8: i = 3 - 2 => i = 1, 1 >= 1 - T
// s = 2, 1 <= (5 - 1)/2 => 2 <= 2 - T
//     * 
//   * * *
// * * * * * 
//   * * * 
//     
// Step 9: i = 3 - 2 => i = 1, 1 >= 1 - T
// s = 3, 1 <= (5 - 1)/2 => 3 <= 2 - F
//     * 
//   * * *
// * * * * * 
//   * * * 
//     
// Step 10: i = 3 - 2 => i = 1, 1 >= 1 - T
// s = 3, 1 <= (5 - 1)/2 => 3 <= 2 - F
// j = 1, j <= i => 1 <= 1 - T
//     * 
//   * * *
// * * * * * 
//   * * * 
//     * 
// Step 11: i = 3 - 2 => i = 1, 1 >= 1 - T
// s = 3, 1 <= (5 - 1)/2 => 3 <= 2 - F
// j = 2, j <= i => 2 <= 1 - F
//     * 
//   * * *
// * * * * * 
//   * * * 
//     * 
// 
// Step 12: i = 1 - 2 => i = -1, -1 >= 1 - F
// STOP
//     * 
//   * * *
// * * * * * 
//   * * * 
//     * 
// 