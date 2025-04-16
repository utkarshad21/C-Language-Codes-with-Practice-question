/*
Q6. Write a program to find greatest of four numbers entered by the user. 
*/
#include <stdio.h>

int main(){
    float n1, n2, n3, n4, g;
    printf("Enter the four numbers to find greatest one: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    if (n1>n2 && n1>n3 && n1>n4)
    {
        g = n1;
    }
    else if (n2>n1 && n2>n3 && n2>n4)
    {
        g = n2;
    }
    else if (n3>n1 && n3>n2 && n3>n4)
    {
        g = n3;
    }
    else
    {
        g = n4;
    }
    printf("The greatest of all is: %f", g);
    return 0;
}