#include<stdio.h>
#include<string.h>

struct Student{
    int id;
    char name[20];
    char branch[20];
    int sem;
    char section;
} s1, s2;

void main(){
    struct Student s1, s2;
    s1.id = 1;
    strcpy(s1.name, "Akshay Rao");
    strcpy(s1.branch, "CSE");
    s1.sem = 1;
    s1.section = 'C';
    
    s2.id = 2;
    strcpy(s2.name, "Ajay Rao");
    strcpy(s2.branch, "ISE");
    s2.sem = 1;
    s2.section = 'A';

    printf("Details of Student 1 are as follows: \n");
    printf("Student ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Branch: %s\n", s1.branch);
    printf("Sem: %d\n", s1.sem);
    printf("Section: %c\n", s1.section);

    printf("Details of Student 2 are as follows: \n");
    printf("Student ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Branch: %s\n", s2.branch);
    printf("Sem: %d\n", s2.sem);
    printf("Section: %c\n", s2.section);
}