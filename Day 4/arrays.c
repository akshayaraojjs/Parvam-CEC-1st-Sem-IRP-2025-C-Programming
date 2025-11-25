#include<stdio.h>
void main(){
    int arr[5];

    printf("Enter any 5 elements: ");
    for(int i=0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array elements are as follows: \n");
    for(int i=0; i<5; i++){
        printf("Element %d: %d\n",i, arr[i]);
    }
}