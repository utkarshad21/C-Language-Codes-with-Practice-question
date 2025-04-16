/*
Q4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. 
*/
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Prompt user for inputs
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}
