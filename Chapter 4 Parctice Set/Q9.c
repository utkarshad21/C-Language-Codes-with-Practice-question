/*
Q9. Repeat Q8 using while loop. 
*/
/*
Q8. Write a program to calculate the factorial of a given number using a for loop. 
    Factorial of 8 = 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8
*/
#include <stdio.h>

int main(){
    int fac = 1;
    int n = 8;
    int i = 1;
    while (i <= n)
    {
        fac *= i;
        printf("One by one factorial of 8 are: %d\n", fac);
        i++;
    }
    
        
    printf("Factorial of %d is: %d", n, fac);
    return 0;
}