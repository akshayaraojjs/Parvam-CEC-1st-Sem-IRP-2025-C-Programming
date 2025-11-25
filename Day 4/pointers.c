#include<stdio.h>
void main(){
    int i = 5;\
    // Integer Pointer variable
    int* ptr;
    int** dptr;
    // Referring the address of i
    // Referencing a Pointer or Pointer Initialization
    ptr = &i;

    printf("The value in i is: %d\n", i);
    printf("The address of i is: %p\n", &i);
    printf("Pointer ptr contains: %p\n", ptr);
    // *ptr is called as Dereferencing the pointer
    printf("Pointer value contains: %d\n", *ptr);
    printf("Address of the pointer: %p\n", &ptr);
    
    *ptr = 10;
    printf("The value in i is: %d\n", i);
}