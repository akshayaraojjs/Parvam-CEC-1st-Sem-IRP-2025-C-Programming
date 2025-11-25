#include<stdio.h>
void main(){
    int size, arr[50], sum=0;

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

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    printf("The sum of array elements: %d", sum);
}

// Tracing:
// size/n = 5, arr[10] = {2, 4, 6, 8, 10}, sum = 0
// Step 1: i = 0, i < n => 0 < 5 - T
// sum = sum + arr[i] => 0 + arr[0] => 0 + 2 = 2
// --------------------------------------------------
// Step 2: i = 1, i < n => 1 < 5 - T
// sum = sum + arr[i] => 2 + arr[1] => 2 + 4 = 6
// --------------------------------------------------
// Step 3: i = 2, i < n => 2 < 5 - T
// sum = sum + arr[i] => 6 + arr[2] => 6 + 6 = 12
// --------------------------------------------------
// Step 4: i = 3, i < n => 3 < 5 - T
// sum = sum + arr[i] => 10 + arr[3] => 12 + 8 = 20
// --------------------------------------------------
// Step 5: i = 4, i < n => 4 < 5 - T
// sum = sum + arr[i] => 18 + arr[4] => 20 + 10 = 30
// --------------------------------------------------
// Step 6: i = 5, i < n => 5 < 5 - F
// STOP
// sum = 30