#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[25];
    char email[30];
    char dept[20];
    float exp;
    char location[30];
};

void main(){
    struct Employee emp[2];

    for(int i=0; i < 2; i++){
        printf("Enter the details of Employee %d\n", i+1);
        printf("Enter the Employee ID: ");
        scanf("%d", &emp[i].id);
        getchar();
        printf("Enter the Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Enter the Email ID: ");
        fgets(emp[i].email, sizeof(emp[i].email), stdin);
        printf("Enter the Department: ");
        fgets(emp[i].dept, sizeof(emp[i].dept), stdin);
        printf("Enter the Experience: ");
        scanf("%f", &emp[i].exp);
        getchar();
        printf("Enter the Location: ");
        fgets(emp[i].location, sizeof(emp[i].location), stdin);
    }

    for(int i = 0; i < 2; i++){
        printf("Details of Employee %d are as follows: \n:", i + 1);
        printf("----------------------------------------------\n");
        printf("Employee ID: %d\n", emp[i].id);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Email ID: %s\n", emp[i].email);
        printf("Employee Department: %s\n", emp[i].dept);
        printf("Employee Experience: %.2f\n", emp[i].exp);
        printf("Employee Location: %s\n", emp[i].location);
        printf("----------------------------------------------\n");
    }
}