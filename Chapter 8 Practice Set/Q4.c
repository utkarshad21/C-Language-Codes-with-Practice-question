/*
Q4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. 
*/
// #include <stdio.h>

// char* slice(char[], int, int);
// char* slice(char str[], int m, int n){
//     int i = 0, count;
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];
//     str = ptr1;
//     str[n] = '\0';
//     return str;
    
// }
// int main(){
//     char str[] = "This is a Computer";

//     printf("%s \n", slice(str, 1, 18));
//     return 0;
// }

#include <stdio.h>

char* slice(char str[], int m, int n){
    // int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char str[] = "I am Sleepy";
    printf("%s", slice(str, 0, 5));
    return 0;
}

