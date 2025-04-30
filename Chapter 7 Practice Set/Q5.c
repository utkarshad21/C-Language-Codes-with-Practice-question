/*
Q5. Write a program containing a function which reverses the array passed to it.
*/
#include <stdio.h>

int reverse(int [], int);
void printArray(int [],int);

int reverse(int arr[], int n){
    
}
void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);  
    }
    printf(" \n");
}
int main(){
    int arr[] = {9, 7, 5, 0, 8, 2, 1, 6, 0};
    printArray(arr, 10);
    reverse(arr, 10);
    printArray(arr, 10);
    return 0;
}