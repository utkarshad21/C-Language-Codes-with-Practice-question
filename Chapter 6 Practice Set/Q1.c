/*
Q1. Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/
#include <stdio.h>

int main(){
    int a = 5;
    int* ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *(&a));
    printf("The value of a is %d\n", *ptr);
    return 0;
}
