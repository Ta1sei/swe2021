#include <stdio.h>
int main(void){
    char firstname[20];
    char lastname[20];
    int id;

    printf("What is your full name?\n");
    scanf("%s %s", firstname, lastname);
    printf("What is your student ID?\n");
    scanf("%d", &id);
    printf("Welcome, %s (studentID:%d)!\n", firstname, id);
}