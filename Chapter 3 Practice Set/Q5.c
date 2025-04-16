/*
Q5. Write a program to determine whether a character entered by the user is 
lowercase or not.
*/
#include <stdio.h>

int main(){
    printf("Enter the lowercase or UPPERCASE character: \n");
    char ch;
    scanf("%c", &ch);
    if (ch>=65 && ch<=90)
    {
        printf("The given character %c is UPPERCASE: \n", ch);
    }
    else if (ch>=97 && ch<=122)
    
    {
        printf("The given character %c is lowercase: \n", ch);
        /*for ch>=97 && ch<=122*/
    }
    else
    {
        printf("The given character is neither lowercase nor uppercase: \n", ch);
    }
    
    
    printf("The character is %c\n", ch);
    printf("The ASCII value of character is %d\n", ch);
    return 0;
}