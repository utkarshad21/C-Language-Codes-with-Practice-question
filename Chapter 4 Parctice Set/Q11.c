/*
Q10. Write a program to check whether a given number is prime or not using loops. 
Q11. Implement 10 using other types of loops. 
*/
#include <stdio.h>

int main(){
    int n = 7;
    int not_prime = 0;
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        do
        {
            if (n%i == 0 && n!=2)
        {
            not_prime = 1;
            break;
        }
        i++;
        } while (i < n);
        
    // while (i < n)
    // {
    //     if (n%i == 0 && n!=2)
    //     {
    //         not_prime = 1;
    //         break;
    //     }
    //     i++;
    // }
    }
    if(not_prime)
        {
            printf("The %d is not prime number.\n", n);
        }
        else
        {
            printf("The %d is prime number.\n", n);
        }
    return 0;
}