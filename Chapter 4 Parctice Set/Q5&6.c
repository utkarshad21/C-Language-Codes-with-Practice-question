/*
Q5. Write a program to sum first ten natural numbers using while loop. 
Q6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    while (i<=10)
    {
        sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is: %d\n", sum);

    for (int j = 1; j <= 10; j++)
    {
        sum1 += j;
    }
    printf("The sum of first ten natural numbers is: %d\n", sum1);

    int k = 1;
    do
    {
        sum2 += k;
        k++;
    } while (k <= 10);
    printf("The sum of first ten natural numbers is: %d\n", sum2);
    
    return 0;
}