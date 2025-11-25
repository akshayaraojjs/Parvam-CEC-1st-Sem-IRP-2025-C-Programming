#include<stdio.h>
void main(){
    int size, arr[50];

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
}