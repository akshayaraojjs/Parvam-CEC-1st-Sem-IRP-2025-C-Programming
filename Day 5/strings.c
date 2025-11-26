#include<stdio.h>
#include<string.h>
void main(){
    char name[20], fullname[20], completename[20];

    printf("Enter your first name: ");
    scanf("%s", &name);

    printf("Your first name is %s\n", name);

    // Not Safe (No limit)
    printf("Enter your full name: ");
    getchar();
    gets(fullname);

    printf("Your name is %s\n", fullname);

    printf("Enter your complete name again: ");
    // Syntax for fgets:
    // fgets(array, sizeof(array), stdin)
    fgets(completename, sizeof(completename), stdin);

    printf("Size of complete name array is %d\n", sizeof(completename));

    printf("You name is %s\n", completename);
}