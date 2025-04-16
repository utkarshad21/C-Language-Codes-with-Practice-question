/*
Q7. Write a program using function to print the following pattern (first n lines) 
* 
* * * 
* * * * *
*/

#include <stdio.h>

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print (2*i - 1) stars for the current line
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int n;
    printf("Enter the number of lines for the pattern: ");
    scanf("%d", &n);

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}
