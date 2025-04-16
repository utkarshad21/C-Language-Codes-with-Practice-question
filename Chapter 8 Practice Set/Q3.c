/*
Q3. Write your own version of strlen function from <string.h> 
*/

#include <stdio.h>

int strlen(char[]);
int strlen(char str[]){
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
int main(){
    char str[] = "Utkarsha";
    
    printf("%d \n", strlen(str));
    
    return 0;
}