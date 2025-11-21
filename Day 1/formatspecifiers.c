#include<stdio.h>
void main(){
    // Character Array or Group of Characters (name)
    char name[100] = "Akshay Rao.J";
    int age = 24;
    float distance = 24.6;
    char section = 'C';

    printf("My name is %s, I'm %d years old. I'm travelling from %.2f kms for teaching %c section students at CEC College.", name, age, distance, section);
}