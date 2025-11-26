#include<stdio.h>
void main(){
    int i = 20;
    float f = 1.45;
    char ch = 'A';

    // Pointer Declaration
    // Syntax: datatype* pointer;
    int* iptr;
    float* fptr;
    char* cptr;

    // iptr will refer the address of integer i
    iptr = &i;
    fptr = &f;
    cptr = &ch;

    printf("Variable i contains value: %d\n", i);
    printf("Variable i is present at: %p\n", &i);
    printf("iptr refers to: %p\n", iptr);
    printf("iptr contains: %d\n", *iptr);
    printf("iptr is present at: %p\n\n", &iptr);

    printf("Variable f contains value: %f\n", f);
    printf("Variable f is present at: %p\n", &f);
    printf("fptr refers to: %p\n", fptr);
    printf("fptr contains: %f\n", *fptr);
    printf("fptr is present at: %p\n\n", &fptr);

    printf("Variable ch contains value: %c\n", ch);
    printf("Variable ch is present at: %p\n", &ch);
    printf("cptr refers to: %p\n", cptr);
    printf("cptr contains: %c\n", *cptr);
    printf("cptr is present at: %p\n\n", &cptr);
}