#include <stdio.h>
void main()
{
    int num, i = 1, j = 1;

    printf("How many even numbers need to be printed: ");
    scanf("%d", &num);

    printf("The even numbers till %d are as follows: \n", num);

    // Syntax:
    // while(condition){
    // some statments
    // increment or decrement
    // }
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    printf("Even Numbers in Reverse Order: \n");
    while (num >= j)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
        }
        num--;
    }
}

// Tracing:
// Initial Value: i = 1, num = 10
// i <= num
// Step 1: 1 <= 10 => T
// if(i % 2 == 0) => if(1 % 2 == 0) => F
// i++ => 1++
// Step 2: 2 <= 10 => T
// if(i % 2 == 0) => if(2 % 2 == 0) => T
// print i => 2
// 2
// i++ => 2++
// Step 3: 3 <= 10 => T
// if(i % 2 == 0) => if(3 % 2 == 0) => F
// i++ => 3++
// Step 4: 4 <= 10 => T
// if(i % 2 == 0) => if(4 % 2 == 0) => T
// print i => 4
// 2 4
// i++ => 4++
// Step 5: 5 <= 10 => T
// if(i % 2 == 0) => if(5 % 2 == 0) => F
// i++ => 5++
// Step 6: 6 <= 10 => T
// if(i % 2 == 0) => if(6 % 2 == 0) => T
// print i => 6
// 2 4 6
// i++ => 6++
// Step 7: 7 <= 10 => T
// if(i % 2 == 0) => if(7 % 2 == 0) => F
// i++ => 7++
// Step 8: 8 <= 10 => T
// if(i % 2 == 0) => if(8 % 2 == 0) => T
// print i => 8
// 2 4 6 8
// i++ => 8++
// Step 9: 9 <= 10 => T
// if(i % 2 == 0) => if(9 % 2 == 0) => F
// i++ => 9++
// Step 10: 10 <= 10 => T
// if(i % 2 == 0) => if(10 % 2 == 0) => T
// print i => 10
// 2 4 6 8 10
// i++ => 10++
// Step 11: 11 <= 10 => F
// STOP
// 2 4 6 8 10