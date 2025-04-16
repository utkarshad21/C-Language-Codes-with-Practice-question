/*
Q4. Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user.
*/
#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
        printf("The given year is leap year");
    }
    else
    {
        printf("The given year is not leap year");
    }
    
    return 0;
}