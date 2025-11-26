#include<stdio.h>

void myCollege(){
    printf("City Engineering College\n");
}

// return_type function_name(parametrs)
// return_type: void, function_name: myBranch(), parameter: branch
void myBranch(char branch[20]){
    printf("I'm studying at %s branch!\n", branch);
}

void welcomeMe(char fName[20], char lName[20]){
    printf("Hi %s %s, Welcome to CEC College!\n", fName, lName);
}

void findSum(int a, int b){
    printf("Sum of %d and %d: %d\n", a, b, a + b);
}

void main(){
    myCollege();
    // function call
    // mybranch(argument)
    myBranch("Computer Science");
    myBranch("Information Science");
    myBranch("Civil Engineering");
    welcomeMe("Akshay", "Rao");
    welcomeMe("Ajay", "Rao");
    findSum(20, 30);
    findSum(30, 40);
}