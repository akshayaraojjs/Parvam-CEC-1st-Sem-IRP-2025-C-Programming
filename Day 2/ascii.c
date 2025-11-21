// Ctrl + Shift + ~ - Open Terminal
#include<stdio.h>
void main(){
    char ch;
    char start, end;

    printf("Enter starting character:");
    scanf(" %c", &start);

    printf("Enter ending character:");
    scanf(" %c", &end);

    printf("Characters from %c to %c: \n", start, end);

    for(ch = start; ch <= end; ch++){
        printf("%c \t %d \n", ch, ch);
    }
}