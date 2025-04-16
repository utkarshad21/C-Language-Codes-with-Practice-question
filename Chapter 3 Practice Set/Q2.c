/*
Q2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.
*/
#include <stdio.h>

int main(){
    float sub1, sub2, sub3;
    float sum, total, percentage;
    
    // Prompt user for inputs
    printf("Enter the marks for sub1: \n");
    scanf("%f", &sub1);
    printf("Enter the marks for sub2: \n");
    scanf("%f", &sub2);
    printf("Enter the marks for sub3: \n");
    scanf("%f", &sub3);
    printf("The marks for all subjects are %f, %f and %f: \n", sub1, sub2, sub3);
    sum = sub1 + sub2 + sub3;
    total = 300;
    printf("Total sum of 3 subjects is: %f \n", sum);
    percentage = (sum)/total * 100;
    printf("Overall Percentage in the exam is: %f \n", percentage);
    if (percentage>=40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("Student has passed in the exam with percentage: %f \n", percentage);
    }
    else
    {
        printf("Student has failed in the exam with percentage: %f \n", percentage);
    }
    
    
    return 0;
}