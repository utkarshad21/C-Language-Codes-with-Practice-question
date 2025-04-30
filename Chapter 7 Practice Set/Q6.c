/*
Q6. Write a program containing functions which counts the number of positive 
integers in an array.
*/
#include <stdio.h>
int positive(int [], int);
// int count(int [], int);
// int count(int arr[], int n){
//     int noOfPositive = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>0)
//         {
//            noOfPositive++;
//         }
        
//     }
//     return noOfPositive;
// }
int positive(int arr[], int n){
    int noOfPositive = 0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>=0)
    {
        int m = arr[i];
        
        noOfPositive++;
        printf("The number %d at index %d is positive in an array\n", m, i);
        // printf("The total number of positive number in an given array is %d\n", noOfPositive);
    }
}
    printf("The total number of positive number in an given array is %d\n", noOfPositive);
}
int main(){
    int a[] = {-2, 4, 7, -9, -2, 5, 4, -1, 0};
    positive(a, 9);
    return 0;
}