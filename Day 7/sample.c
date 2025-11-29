#include<stdio.h>

// Syntax:
// struct StructureName{
// member variables;
// };

struct Add{
    int a, b;
};

void main(){
    int a;
    float f;
    char c;
    // Initializing the structure variable
    struct Add A1 = {2, 3};
    // datatype variable
    // {int} integer
    // {struct Add} A1
    struct Add B1;
    // Second Method os initializing structure variables
    B1.a = 25;
    B1.b = 30;
    // struct_variable.member_variable
    // Structure Member Operator(.)(Dot operator)
}