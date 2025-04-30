/*
Q4. Write a function and pass the value by reference.
*/
#include <stdio.h>

int sum(int*, int*);
int sum(int* a, int* b){
    int c = *a + *b;
    return c;
}
int main(){
    int x, y;
    printf("Enter two values to be added: \n");
    scanf("%d %d", &x, &y);
    printf("Sum of two numbers is: %d\n", sum(&x, &y));
    return 0;
}