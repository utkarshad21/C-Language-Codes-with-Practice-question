/* Q1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.
Area of rectangle = Lenght x width */ 
#include <stdio.h>

int main(){
    // int l = 10;
    // int w = 20;

    int l, w;

    printf("Enter Lenght of rectangle: ");
    scanf("%d", &l);

    printf("Enter Width of rectangle: ");
    scanf("%d", &w);

    int a = l*w;

    printf("Area of rectangle is: %d", a);
    return 0;
}