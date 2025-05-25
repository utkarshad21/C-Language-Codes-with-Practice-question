/*
Q5. Write a program containing a function which reverses the array passed to it.
*/
#include <stdio.h>

void reverse(int [], int);
void printArray(int [],int);

void reverse(int arr[], int n){
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
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
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Original array: ");
    printArray(arr, n);

    reverse(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}
