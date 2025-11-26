#include<stdio.h>
void main(){
    int n = 20;
    int* nptr = &n;

    printf("Value of n: %d and address of n:%p\n", n, &n);
    printf("Referring address of nptr: %p and nptr refers to value :%d\n", nptr, *nptr);
    
    *nptr = 30;
    printf("Value of n after changes: %d and address of n:%p\n", n, &n);

    printf("Value of n after adding 5: %d\n", *nptr + 5);

    printf("Value of n after subtracting 8: %d\n", *nptr - 8);

    printf("Value of n after dividing by 3: %d\n", *nptr / 3);

    // Pointer arithmetic will refer to the original value, it doesn't refer to the modified value
}