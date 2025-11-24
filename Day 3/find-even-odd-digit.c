#include<stdio.h>
void main(){
    int num, even = 0, odd = 0, rem = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);

    while(num > 0){
        rem = num % 10;
        if(rem % 2 == 0){
            even += rem;
        } else {
            odd += rem;
        }
        num = num / 10;
    }
    printf("Sum of Even Digits: %d\n", even);
    printf("Sum of Odd Digits: %d\n", odd);
}

// Tracing:
// num = 1234, even = 0, odd = 0, rem = 0
// ---------------------------------------
// Step 1: 1234 > 0 - T
// rem = num % 10 => 1234 % 10 => 4
// 4 % 2 == 0 - T
// even = even + rem => 0 + 4 => 4
// num = num / 10 => 1234 / 10 => 123
// ---------------------------------------
// Step 2: 123 > 0 - T
// rem = num % 10 => 123 % 10 => 3
// 3 % 2 == 0 - F
// 3 % 2 != 0 - T
// odd = odd + rem => 0 + 3 => 3
// num = num / 10 => 123 / 10 => 12
// ---------------------------------------
// Step 3: 12 > 0 - T
// rem = num % 10 => 12 % 10 => 2
// 2 % 2 == 0 - T
// even = even + rem => 4 + 2 => 6
// num = num / 10 => 12 / 10 => 1
// ---------------------------------------
// Step 4: 1 > 0 - T
// rem = num % 10 => 1 % 10 => 1
// 1 % 2 == 0 - F
// 1 % 2 != 0 - t
// odd = odd + rem => 3 + 1 => 4
// num = num / 10 => 1 / 10 => 0
// ---------------------------------------
// Step 5: 0 > 0 - F
// STOP
// even = 6
// odd = 4