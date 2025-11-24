#include <stdio.h>
void main()
{
    int num, count = 0;

    printf("Enter any number:");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);
    if (num == 0){
        count = 1;
    }
    while (num > 0){
        count++;
        num = num / 10;
    }
    printf("Number of digits in a given number: %d", count);
}

// Tracing:
// num = 12345, count = 0
// Step 1: count = 0
// num > 0 => 12345 > 0 - T
// count++ => 0++ 
// num = num / 10 => 12345 / 10 => 1234
// -------------------------------------
// Step 2: count = 1 
// num > 0 => 1234 > 0 - T
// num = num / 10 => 1234 / 10 => 123
// count++ => 1++ 
// -------------------------------------
// Step 3: count = 2 
// num > 0 => 123 > 0 - T
// num = num / 10 => 123 / 10 => 12
// count++ => 2++ 
// -------------------------------------
// Step 4: count = 3 
// num > 0 => 12 > 0 - T
// num = num / 10 => 12 / 10 => 1
// count++ => 3++ 
// -------------------------------------
// Step 5: count = 4 
// num > 0 => 1 > 0 - T
// num = num / 10 => 1 / 10 => 0
// count++ => 4++ 
// -------------------------------------
// Step 6: count = 5 
// num > 0 => 0 > 0 - F
// STOP
// count = 5