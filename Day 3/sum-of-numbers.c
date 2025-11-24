#include<stdio.h>
void main(){
    int num, sum=0, i = 0;

    printf("Enter the number to find the sum:");
    scanf("%d", &num);
    
    while(i <= num){
        sum = sum + i;
        // sum += i;
        i++;
    }
    printf("Sum from 0 to %d: %d", num, sum);
}

// Tracing
// num = 5, sum = 0, i = 0
// Step 1: 0 <= 5 - T
// sum = sum + i => 0 + 0 => 0
// Step 2: 1 <= 5 - T
// sum = sum + i => 0 + 1 => 1
// Step 3: 2 <= 5 - T
// sum = sum + i => 1 + 2 => 3
// Step 4: 3 <= 5 - T
// sum = sum + i => 3 + 3 => 6
// Step 5: 4 <= 5 - T
// sum = sum + i => 6 + 4 => 10
// Step 6: 5 <= 5 - T
// sum = sum + i => 10 + 5 => 15
// Step 7: 6 <= 5 - F
// STOP
// sum = 15