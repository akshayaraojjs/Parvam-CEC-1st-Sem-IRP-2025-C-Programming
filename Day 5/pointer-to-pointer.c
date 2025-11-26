#include<stdio.h>
void main(){
    int num = 50;
    // Normal Pointer(Integer Pointer)
    int* numptr = &num;

    // Double Pointer or Pointer to Pointer
    int** dptr = &numptr;

    printf("num value: %d and it is present at: %p\n", num, &num);
    printf("numptr refers to: %p and it has value: %d and it is present at: %p\n", numptr, *numptr, &numptr);
    printf("dptr refers to: %p and it has value: %p\n", dptr, *dptr);
    printf("dptr can directly access num value: %d", **dptr);
}

// variable = value[address]
// num = 50[1000]

// numptr->num
// numptr = 1000[1100]

// numptr => 1000(address of num), 
// *numptr => 50(value of num)

// dptr->numptr
// dptr = 1100[1200]

// dptr => 1100(address of numptr), 
// *dptr => 1000(address reffered by numptr), 
// **dptr => 50(value referred by numptr or value of num)