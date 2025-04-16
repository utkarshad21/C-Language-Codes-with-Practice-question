/*
4. Take name and salary of two employees as input from the user and write them to 
a text file in the following format: 
i. Name1, 3300 
ii. Name2, 7700 
*/

#include <stdio.h>

struct employee
{
    char name[10];
    float salary;
};

int main(){
    FILE *ptr;

    struct employee emp[2];
    
    printf("Enter name and salary of person 1\n");
    scanf("%s %f", emp[0].name, &emp[0].salary);
    printf("Enter name and salary of person 2\n");
    scanf("%s %f", emp[1].name, &emp[1].salary);
    
    ptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\employees_data.txt", "a");

    fprintf(ptr, " i. %s, %.2f \n", emp[0].name, emp[0].salary);
    fprintf(ptr, "ii. %s, %.2f \n", emp[1].name, emp[1].salary);
    fclose(ptr);
    return 0;
}