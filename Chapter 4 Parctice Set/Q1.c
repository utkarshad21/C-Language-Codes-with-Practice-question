/*
Q1. Write a program to print multiplication table of a given number n. 
*/
#include <stdio.h>

int main(){
    int n, m;
    printf("Enter the number to get the multiplication table: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        m = n*i;
        printf("%d x %d = %d \n",n, i, m);
    }
    
    return 0;
}