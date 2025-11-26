#include<stdio.h>

int findSquareArea(int length){
    return length * length;
}

int findRectangleArea(int length, int breadth){
    return length * breadth;
}

int findCubeArea(int length, int breadth, int height){
    return length * breadth * height;
}

void main(){
    printf("Area of Square 1: %d\n", findSquareArea(123));
    printf("Area of Square 2: %d\n", findSquareArea(200));

    printf("Area of Rectangle 1: %d\n", findRectangleArea(20, 50));
    printf("Area of Rectangle 2: %d\n", findRectangleArea(30, 40));

    printf("Area of Cube 1: %d\n", findCubeArea(10, 20, 30));
    printf("Area of Cube 2: %d\n", findCubeArea(12, 24, 36));
}