/*
Q7. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). 
*/
#include <stdio.h>

int main(){
    int n, m, sum;
    printf("Enter the number to get the multiplication table: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        m = n*i;
        printf("%d x %d = %d \n",n, i, m);
        int p = n*i;
        sum += p;
    }
        printf ("Sum of all answers is: %d", sum);
    
    return 0;
}