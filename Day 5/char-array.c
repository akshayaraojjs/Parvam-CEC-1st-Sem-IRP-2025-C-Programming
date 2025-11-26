#include<stdio.h>
void main(){
    int size;
    char name[20];

    printf("Enter the number of characters in your first name: \n");
    scanf("%d", &size);

    printf("Enter your first name: ");
    for(int i=0; i<size; i++){
        scanf(" %c", &name[i]);
    }

    printf("You've entered: \n");
    for(int i=0; i<size; i++){
        printf("%c", name[i]);
    }

    // In character array, we will end it using \0 or null character
    // name[10] = {'A', 'K', 'S', 'H', 'A', 'Y', '\0' }
}