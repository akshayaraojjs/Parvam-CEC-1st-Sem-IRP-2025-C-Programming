#include <stdio.h>
void main()
{
    int size, arr[50], reverse[50], copy[50];

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter any %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are as follows: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }

    for(int i = size - 1, j = 0; i >= 0; i--, j++){
        reverse[j] = arr[i];
    }

    printf("Reversed array elements are as follows: \n");
    for (int i = 0; i < size; i++){
        printf("%d\n", reverse[i]);
    }

    for(int i = 0; i < size; i++){
        copy[i] = arr[i];
    }
    
    printf("Copied array: \n");
    for(int i = 0; i < size; i++){
        printf("%d\t",copy[i]);
    }
}

// Tracing:
//                  index:0  1  2  3
// size/n = 4, arr[10] = {2, 5, 7, 13}, rev[10] = {}
// Step 1: i = n - 1 => i = 4 - 1 = 3, j = 0, i >= 0 => 3 >= 0 - T
// rev[j] = arr[i] => rev[0] = arr[3] => rev[0] = 13
// Step 2: 1 = 2, j = 1, i >= 0 => 2 >= 0 - T
// rev[j] = arr[i] => rev[1] = arr[2] => rev[1] = 7
// Step 3: 1 = 1, j = 2, i >= 0 => 1 >= 0 - T
// rev[j] = arr[i] => rev[2] = arr[1] => rev[2] = 5
// Step 4: 1 = 0, j = 3, i >= 0 => 0 >= 0 - T
// rev[j] = arr[i] => rev[3] = arr[0] => rev[3] = 2
// Step 5: 1 = -1, j = 4, i >= 0 => -1 >= 0 - F
// STOP
// rev[10] = {13, 7, 5, 2}