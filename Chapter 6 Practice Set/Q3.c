/*
Q3. Write a program to change the value of a variable to ten times of its current
value.
*/
#include <stdio.h>

void change(int*);

void change(int* a) {
    *a = *a * 10;   // Update the value to ten times
}

int main() {
    int x; // Declare a variable
    printf("Enter the value: \n");
    scanf("%d", &x); // Read the value directly into the memory location pointed to by a
    printf("The value of x is %d\n", x);
    change(&x); // Pass the address of the variable to the function
    printf("The ten times value is %d\n", x); // Display the result
    return 0;
}
