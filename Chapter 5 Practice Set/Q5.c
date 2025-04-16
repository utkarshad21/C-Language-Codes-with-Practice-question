/*
Q5. What will the following line produce in a C program: 
int a = 4; 
printf("%d %d %d \n", a, ++a, a++); 
*/
#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++); 
    // if printf have same variable the evalution order is from right to left
    return 0;
}


/*
Argument Evaluation Order: In C, the order of evaluation of function arguments is unspecified. This means that the compiler can evaluate function arguments in any order it chooses.
Possible Evaluation Orders:
Depending on how the compiler evaluates the arguments, we might get different sequences of operations. Some common outputs include:

If ++a is evaluated first:

++a makes a = 5, and the value used is 5.
a++ uses a = 5 and increments it to 6 after evaluation.
a (first argument) could then be the final value of a = 6.
Output: 6 5 5
If a++ is evaluated first:

a++ uses a = 4 and increments it to 5.
++a increments a to 6 and uses 6.
a (first argument) could then be 6.
Output: 6 6 4
Other Outputs: Depending on how the compiler schedules the evaluations, other outputs like 5 6 4, 5 5 6, etc., could also occur.

Undefined Behavior:
Since the standard does not enforce a specific order, and a is modified multiple times without sequence points, you cannot reliably predict the output.
*/