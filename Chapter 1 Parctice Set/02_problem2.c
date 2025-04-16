/*
Q2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
*/
#include <stdio.h>

int main(){
    
    int r = 6;
    int h = 10;
    //area of circle
    float a = 3.14*r*r;
    //volume of cylinder
    float v = a*h;
    printf("The area of circle with radius 5 is %f", a);
    printf("The volume of cylinder is %f", v);
    return 0;
}