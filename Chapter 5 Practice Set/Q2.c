/*
Q2. Write a function to convert Celsius temperature into Fahrenheit. 
*/
#include <stdio.h>

float fahrenheit(float);
float fahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}
int main(){
    float cel;
    // Prompt user for Celsius input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", cel, fahrenheit(cel));
    return 0;
    return 0;
}