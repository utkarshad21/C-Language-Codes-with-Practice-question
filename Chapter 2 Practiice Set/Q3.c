//Q3. Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value to check whether it is divisible by 97? ");
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("Number is divisible by 97\n");
    }
    else
    {
        printf("Number is not divisible by 97\n");
    }
    printf("The value of a%97 is %d\n", a%97);

    return 0;
}