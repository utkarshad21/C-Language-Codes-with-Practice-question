/*
Q2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
The vectors must be two–dimensional. 
*/
#include <stdio.h>


typedef struct
{
    float x;
    float y;
}vec;

vec sumVector(vec v1, vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

void displayVector(vec v){
    printf("Vector: (%.2f, %.2f) \n", v.x, v.y);
}

int main(){
    vec v1 = {3.5, 4.2};
    vec v2 = {1.5, -2.3};
    printf("Initial Vectors: \n");
    displayVector(v1);
    displayVector(v2);
    
    vec sum = sumVector(v1, v2);
    printf("Sum of vectors:");
    displayVector(sum);
    return 0;
}