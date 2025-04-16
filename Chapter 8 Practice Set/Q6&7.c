/*
Q6. Write a program to encrypt a string by adding 1 to the ascii value of its 
characters. 
Q7. Write a program to decrypt the string encrypted using encrypt function in 
problem 6. 
*/
#include <stdio.h>
#include <string.h>

void encrypt(char str[]);
void decrypt(char str[]);
void encrypt(char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    str[strlen(str)] = '\0';
}
void decrypt(char str[]){
for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    str[strlen(str)] = '\0';
}
int main(){
    char str1[] = "I am from MARS and this is EARTH";
    char str2[] = "J!bn!gspn!NBST!boe!uijt!jt!FBSUI";
    printf("Original string: %s\n", str1);
    encrypt(str1);
    printf("The encrypted string is: %s\n", str1);
    decrypt(str1);
    printf("The decrypted string is: %s\n", str1);
    decrypt(str2);
    printf("The decrypted string is: %s\n", str2);
    return 0;
}