#include<stdio.h>
void main(){
    int num, i = 1;

    printf("Enter how many numbers need to be printed: ");
    scanf("%d", &num);
    
    printf("Numbers are as follows: \n");
    while(i <= num){
        printf("%d\n",i);
        // Post Increment
        i++;
    }
}

// Tracing:
// Initial value: i = 1, num = 5
// i <= num
// Step 1: 1 <= 5 => T
// print i => 1
// 1 
// i++ => 1++
// Step 2: 2 <= 5 => T
// print i => 2
// 1 2
// i++ => 2++
// Step 3: 3 <= 5 => T
// print i => 3
// 1 2 3
// i++ => 3++
// Step 4: 4 <= 5 => T
// print i => 4
// 1 2 3 4
// i++ => 4++
// Step 5: 5 <= 5 => T
// print i => 5
// 1 2 3 4 5
// i++ => 5++
// Step 6: 6 <= 5 => F
// STOP
// 1 2 3 4 5