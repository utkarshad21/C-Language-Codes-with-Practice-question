/*
Q2. Write a program to print multiplication table of 10 in reversed order. 
*/
#include <stdio.h>

int main(){
    int n, m;
    printf("Enter the number to get the multiplication table in reversed order: ");
    scanf("%d", &n);
    for (int i = 10; i; i--)
    {
        m = n*i;
        printf("%d x %d = %d \n",n, i, m);
    }
    
    return 0;
}