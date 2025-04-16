/*
Q3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). 
*/
#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    // Prompt user for Celsius input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}