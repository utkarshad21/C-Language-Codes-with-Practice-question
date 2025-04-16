/*
Q6. Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
*/
#include <stdio.h>

int sum(int);
int sum(int n){
    if (n == 1)
    {
        return 1;
    }
    
    return sum(n-1) + n;
}
int main(){
    int n = 5;
    printf("The sum of first %d natural numbers is: %d", n, sum(n));
    return 0;
}