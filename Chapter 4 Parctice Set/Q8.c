/*
Q8. Write a program to calculate the factorial of a given number using a for loop. 
    Factorial of 8 = 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8
*/
#include <stdio.h>

int main(){
    int fac = 1;
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
        printf("One by one factorial of 8 are: %d\n", fac);
    }
    printf("Factorial of 8 is: %d", fac);
    return 0;
}