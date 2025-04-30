/*
Q5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/
// #include <stdio.h>


// int* sum(int a, int b){
//     int s = a+b;
//     int* ptr11 = &s;
//     printf("The sum is %d\n", s);
//     return ptr11;
// }

// float* average(int a, int b){
//     float avg =  (a+b)/2.0;
//     float * ptr22 = &avg;
//     printf("The average is %f\n", avg);
//     return ptr22;
// }

// int main(){
//     int x = 4; 
//     int y = 6;
//     int* ptr1;
//     float* ptr2;

//     ptr1 = sum(x,y);
//     ptr2 = average(x,y);

//     printf("The address of sum is %u and of average is %u", ptr1, ptr2 );

//     return 0;
// }
/*
Q5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

#include <stdio.h>

float sum(int*, int*);
float avg(int*, int*);
float avg(int* p, int* q){
    float r = sum(p, q)/2;
    return r;
}
float sum(int* a, int* b){
    float c = *a + *b;
    return c;
}
int main(){
    int x, y;
    printf("Enter two values to be added: \n");
    scanf("%d %d", &x, &y);
    printf("Sum of two numbers is: %.2f\n", sum(&x, &y));
    printf("Average of two numbers is: %.2f\n", avg(&x, &y));
    return 0;
}
