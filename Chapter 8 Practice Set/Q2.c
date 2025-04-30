/*
Q2. Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.
*/
#include <stdio.h>

int main(){
    char st[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    st[6] = '\0';
    // scanf("%c", st);
    // printf("%c", st);
    
    // scanf("%s", st);
    printf("%s", st);

 
    return 0;
}