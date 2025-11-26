#include<stdio.h>
void main(){
    //           0  1  2  3  4
    int a[10] = {5, 10, 15, 20, 25};
    int* aptr = a; // Refers to the first element of array
    int (*arrayptr)[10] = &a; // Refers to entire array

    printf("Array contains: \n");
    for(int i=0; i < 5; i++){
        printf("%d\t", a[i]);
    }

    printf("\nSize of array: %d\n", sizeof(a));
    printf("\nAddress of array: %p\n", &a);

    printf("aptr referring to address: %p and address has the value: %d\n", aptr, *aptr);
    
    printf("Array Pointer contains: \n");
    for(int i=0; i < 5; i++){
        printf("%d\t", (*arrayptr)[i]);
    }

    printf("\nSecond value of Array pointer: %d\n", (*arrayptr)[1]);

    // Pointer Arithmetic
    printf("Value of a after adding 2: %d\n", *aptr + 2);

    printf("Value of aptr array after adding 2: %d\n", (*arrayptr)[1] + 2);

    for(int i=0; i<5;i++){
        (*arrayptr)[i] = (*arrayptr)[i] + 2;
    }
    
    printf("After adding, Array pointer contains: \n");
    for(int i=0; i<5;i++){
        printf("%d\t", (*arrayptr)[i]);
    }
}