/*
Q8. Write a program to count the occurrence of a given character in a string. 
*/
#include <stdio.h>
#include <string.h>

   
// int count(char str[], char ch){
//     int count = 0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == ch)
//         {
//             count++;
//         }
//     }
//     return count;
// }
int main(){
    char str1[] = "myself my mummy mom myself";
    char ch = 'm';
    // printf("Enter the string: \n");
    // scanf("%s", &str1);
    // printf("Enter the character to count the occurrence of a given character in a string: \n");
    // scanf("%c", &ch);
    int count = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ch)
        {
            count++;
        }
    }
    printf("The occurrence of %c in given string is: %d\n", ch, count);
    return 0;
}