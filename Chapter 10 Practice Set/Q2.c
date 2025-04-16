/*
Q2. Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted. 
*/

#include <stdio.h>

// Function to write multiplication table to a file
void table(int num) {
    FILE *fptr;

    // Open file in write mode (overwrites any existing content)
    fptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\multiplication_table.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error: Unable to create file.\n");
        return;
    }

    // Write table header
    fprintf(fptr, "Multiplication Table of %d\n", num);
    fprintf(fptr, "-------------------------\n");

    // Loop to write multiplication table
    for (int i = 1; i <= 10; i++) {
        fprintf(fptr, "%d x %d = %d\n", num, i, num * i);
    }

    // Close the file
    fclose(fptr);

    printf("Multiplication table saved successfully!\n");
}

int main() { 
    table(3);  // Generate multiplication table for 3
    return 0;
}


/*
#include <stdio.h>
int table(int num);
int a = 0;
int table(int num){

    for (int i = 1; i <= 10; i++)
    {
        a = i * num;
        printf("%d * %d = %d \n", num, i, a);
    }
}
int main(){
    FILE *fptr;
    int num1;
    fptr = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\multiplication_table.txt", "r");
    fscanf(fptr, "%d", &num1);
    table(num1);
 // table(3);
    fclose(fptr);
    return 0;

}

*/