#include<stdio.h>
void main(){
    int size, arr[50], largest = 0, second = 0, smallest = 0,       total = 0, avg = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter any %d elements: ", size);
    for(int i=0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array elements are as follows: \n");
    for(int i=0; i < size; i++){
        printf("Element %d: %d\n",i, arr[i]);
    }

    largest = arr[0];

    smallest = arr[0];
    for(int i=0; i < size; i++){
        total = total + arr[i];
        if(arr[i] > largest){
            largest = arr[i];
        }

        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    avg = (total)/size;

    printf("Smallest element in the given array: %d\n", smallest);
    printf("Largest element in the given array: %d\n", largest);
    printf("Average value from the given array: %d\n", avg);
}