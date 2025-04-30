/*
Q7. Try problem 3 using call by value and verify that it does not change the value of
the said variable.
*/
/*
Q3. Write a program to change the value of a variable to ten times of its current
value.
*/
#include <stdio.h>

int change(int);

int change(int a) {
    a = a * 10;   // Update the value to ten times
}

int main() {
    // int x; // Declare a variable
    // printf("Enter the value: \n");
    // scanf("%d", &x); // Read the value directly into the memory location pointed to by a
    // printf("The value of x is %d\n", x);
    // change(&x); // Pass the address of the variable to the function
    printf("The ten times value is %d\n", change(5)); // Display the result
    return 0;
}

// #include <stdio.h>

// void change_to_thirty_times(int);

// void change_to_thirty_times(int a){
//     a = a * 10;
// }

// int main(){
//     int x = 45;
//     printf("The value of x is %d\n", x);
//     change_to_thirty_times(x);
//     printf("The value of x is %d\n", x);

//     return 0;
// }