#include<stdio.h>
void main(){
    int size, arr[50];

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    printf("Enter any %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array elements are as follows: \n");
    for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }

    printf("Even Numbers in the given array: \n");
    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0){
            printf("%d\t", arr[i]);
        }
    }

    printf("\nOdd Numbers in the given array: \n");
    for(int i=0; i<size; i++){
        if(arr[i]%2 != 0){
            printf("%d\t", arr[i]);
        }
    }
}

// Tracing:
// size/n = 5, arr[10] = {1, 5, 4, 8, 11}
// Step 1: i = 0, i < n => 0 < 5 - T
// arr[i] % 2 == 0 => arr[0] % 2 == 0 => 1 % 2 == 0 - F
// Odd = 1
// Step 2: i = 1, i < n => 1 < 5 - T
// arr[i] % 2 == 0 => arr[1] % 2 == 0 => 5 % 2 == 0 - F
// Odd = 1, 5
// Step 3: i = 2, i < n => 2 < 5 - T
// arr[i] % 2 == 0 => arr[2] % 2 == 0 => 4 % 2 == 0 - T
// Odd = 1, 5 | Even = 4
// Step 4: i = 3, i < n => 3 < 5 - T
// arr[i] % 2 == 0 => arr[3] % 2 == 0 => 8 % 2 == 0 - T
// Odd = 1, 5 | Even = 4, 8
// Step 5: i = 4, i < n => 4 < 5 - T
// arr[i] % 2 == 0 => arr[4] % 2 == 0 => 11 % 2 == 0 - F
// Odd = 1, 5, 11 | Even = 4, 8
// Step 6: i = 5, i < n => 5 < 5 - F
// STOP
// Odd = 1, 5, 11 | Even = 4, 8