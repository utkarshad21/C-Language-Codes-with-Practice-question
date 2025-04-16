/*
Q1. Write a program using function to find average of three numbers. 
*/
#include <stdio.h>
float average(int, int, int);
float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int x, y, z;
    printf("Enter three numbers to find average: \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("The average of a, b, c is: %f\n", average(x, y, z));
    return 0;
}