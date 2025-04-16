/*
Q1. Write a program to read three integers from a file. 
*/


#include <stdio.h>
int main(){
    
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\file.txt", "r");
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The value are %d %d %d \n", num1, num2, num3);
    fclose(fptr);
    return 0;
}

// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     int num1, num2, num3;

//     // Open the file in read mode
//     ptr = fopen("file.txt", "r");

//     // Check if the file opened successfully
//     if (ptr == NULL) {
//         printf("Error: Unable to open file. Check if 'file.txt' exists in the same directory.\n");
//         return 1;  // Exit with an error code
//     }

//     // Read three integers and check if fscanf successfully reads them
//     int count = fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    
//     if (count != 3) {
//         printf("Error: fscanf could not read three integers. Only %d values read.\n", count);
//         fclose(ptr);
//         return 1;  // Exit with an error code
//     }

//     // Print the values read
//     printf("The values are: %d %d %d\n", num1, num2, num3);

//     // Close the file
//     fclose(ptr);
    
//     return 0;
// }