/*
Q1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the 
array.
*/
#include <stdio.h>

int main(){
    int arr[] = {9, 7, 5, 0, 8, 2, 1, 6, 0};
    int *ptr = &arr[0];
    // int *ptr = arr;
    printf("The value at address %u is %d\n", ptr + 2, *(ptr + 2));
    for (int i = 0; i < 3; i++)
    {
        //printf("The value at %d is %d\n", i, arr[i]);
        printf("The value at %d is %d\n", i, *ptr);
        ptr++;
    }
    
    return 0;
}