/*
Q5. Write your own version of strcpy function from <string.h> 
*/
#include <stdio.h>
#include <string.h>

int mystrlen(char[]);
int mystrlen(char str[]){
    int i = 0;
    int count;
    char c = str[i];
    while (c!='\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
void mystrcpy(char target[], char source[]){

    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
   // target[i] = '\0';
   target[mystrlen(source)] = '\0';
}
int main(){
    char str1[]= "Hello";
    char str2[30];
    mystrcpy(str2, str1);
    printf("%s %s", str2, str1);
    return 0;
}