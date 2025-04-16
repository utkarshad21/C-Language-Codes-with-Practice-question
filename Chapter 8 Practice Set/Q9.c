/*
Q9. 9. Write a program to check whether a given character is present in a string or not. 
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "myself my mummy mom myself";
    char ch = 'o';

    int count = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ch)
        {
            count = 1;
            break;// This break statement will exit the loop once the character is found!
        }
    }
    if (count)
    {
        printf("%c is present", ch);
    }
    else{
    printf("%c is not present", ch);
    }
    return 0;
}