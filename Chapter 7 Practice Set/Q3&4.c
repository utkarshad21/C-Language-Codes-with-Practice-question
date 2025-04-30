/*
Q3. Write a program to create an array of 10 integers and store multiplication table of 
5 in it.
Q4. Repeat problem 3 for a general input provided by the user using scanf.
*/
#include <stdio.h>

int main(){
    int arr[10];
    int m;
    printf("Enter the number to get the table of that number: \n");
    scanf("%d", &m);
    
    for (int i = 1; i <= 10; i++)
    {
        arr[i] = m*i;
        printf("Value of %d x %d = %d \n", m, i, arr[i]);
        // printf("The Value of % x %d = %d \n", i, arr[i]);
    }
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("The Value of 5 x %d = %d \n", i, arr[i]);
        
    // }
    
    return 0;
}