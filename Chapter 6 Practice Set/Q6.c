/*
Q6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/
#include <stdio.h>

int main(){
    int i = 8;
    int *j = &i;
    int **k = &j;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **k);
    return 0;
}
/*
Q6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/
// #include <stdio.h>

// int main(){
//     int i = 8;
//     int *j;
//     j = &i;
//     int **k;
//     k = &j;
//     printf("add i= %u\n",&i);
// printf("add i= %u\n",j);
// printf("add j= %u\n",&j);
// printf("value i= %d\n",i);
// printf("value i= %d\n",*(&i));
// printf("value j= %d\n",*j);
// printf("value j= %u\n",*(&j));
// printf("value k= %d\n",**k);
//     return 0;
// }