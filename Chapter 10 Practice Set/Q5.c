/*
5. Write a program to modify a file containing an integer to double its value. 
*/

#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\double_int.txt", "r");

    fscanf(ptr, "%d", &num);
    fclose(ptr);

    num *= 2;
    ptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\double_int.txt", "w");

    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
