#include<stdio.h>
void main(){
    int i = 10;
    float f = 3.142;
    char c = '+';

    // Shift + Alt + Bottom Arrow
    printf("Integer i contains: %d, Size of int: %d\n", i, sizeof(i));
    printf("Float f contains: %f, Size of float: %d\n", f, sizeof(f));
    printf("Char c contains: %c, Size of char: %d\n", c, sizeof(c));

    // 1 byte: 8 bits
}