#include<stdio.h>

// Syntax:
// return_type function_name(parameters){
// }

// Function Declaration
// Ex: void sayHi()

// Function Definition
// Ex: void sayHi(){
//  printf("Hi students!");
// }

// Function Call
// Ex: sayHi();

void greet(){
    printf("Good Morning Students!\n");
}
void sayHello();

void main(){
    greet();
    greet();
    greet();
    sayHello();
}

void sayHello(){
    printf("Hello Students!");
}