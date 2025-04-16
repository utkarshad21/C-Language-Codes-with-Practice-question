/*
Q3. Write a program to read a text file character by character and write its content 
twice in separate file. 
*/


#include <stdio.h>

int main() {
    FILE *sourcefile, *destinationfile;
    char ch;

    // Open source file in read mode
    sourcefile = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\sourcetext.txt", "r");

    // Open destination file in write mode
    destinationfile = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\destinationtext.txt", "w");

    // Check if files opened successfully
    if (sourcefile == NULL || destinationfile == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Copy content once
    while ((ch = fgetc(sourcefile)) != EOF) {
        fputc(ch, destinationfile);
    }

    // Move file pointer back to the beginning
    rewind(sourcefile);

    // Copy content again
    while ((ch = fgetc(sourcefile)) != EOF) {
        fputc(ch, destinationfile);
    }

    // Close files
    fclose(sourcefile);
    fclose(destinationfile);

    printf("File content copied twice successfully!\n");

    return 0;
}

// #include <stdio.h>

// int main() {
//     FILE *ptr1, *ptr2;
//     char ch;

//     // Open source file in read mode
//     ptr1 = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\sourcetext.txt", "r");
//     if (ptr1 == NULL) {
//         printf("Error: Could not open source file.\n");
//         return 1;
//     }

//     // Open destination file in write mode
//     ptr2 = fopen("C:\\Users\\utkdo\\OneDrive\\Desktop\\C codes\\Codes\\Chapter 10 Practice Set\\destinationtext.txt", "w");
//     if (ptr2 == NULL) {
//         printf("Error: Could not open destination file.\n");
//         fclose(ptr1);
//         return 1;
//     }

//     // Read characters one by one and write each twice to the destination
//     while ((ch = fgetc(ptr1)) != EOF) {
//         fputc(ch, ptr2);
//         fputc(ch, ptr2);
//         printf("%c", ch);  // Optional: print to console
//     }

//     // Close both files
//     fclose(ptr1);
//     fclose(ptr2);

//     printf("\nContent copied and duplicated successfully.\n");
//     return 0;
// }





// #include <stdio.h>

// int main(){
//     FILE *sourcefile, *destinationfile;
//     char ch;
//     sourcefile = fopen("C://Users//utkdo//OneDrive//Desktop//C codes//Codes//Chapter 10 Practice Set//sourcetext.txt", "r");
//     destinationfile = fopen("C://Users//utkdo//OneDrive//Desktop//C codes//Codes//Chapter 10 Practice Set//destinationtext.txt", "w");
    
//     // Check if files opened successfully
//     if (sourcefile == NULL || destinationfile == NULL) {
//         printf("Error: Unable to open file.\n");
//         return 1;
//     }
//     while ((ch = fgetc(sourcefile)) != EOF)
//     {
//         fputc(ch, destinationfile);
//     }
    
//     // Move file pointer back to the beginning
//     rewind (sourcefile);


//     // while ((ch = fgetc(sourcefile)) != EOF)
//     // {
//     //      fputc(ch, destinationfile);
//     // }
    
    
//     // fscanf(ptr, "%c", &txt);
//     // fprintf("%c", txt);
//     fclose(sourcefile);
//     fclose(destinationfile);
//     printf("File content copied twice successfully!\n");
//     return 0;
// }
    
