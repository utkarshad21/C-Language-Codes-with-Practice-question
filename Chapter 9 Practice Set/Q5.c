/*
Q5. Write a program with a structure representing a complex number. 
A complex number is a number that can be expressed in the form a + bi, where a and b are real numbers, and i is the imaginary unit (defined as the square root of -1). 
In the expression a + bi, a is called the real part, and b is called the imaginary part. 
*/
typedef struct c
{
    int real;
    int imaginary;
}complex;
int main(){
    complex c = {1, 2};

    printf("The complex number is %d + %di \n", c.real, c.imaginary); // a + bi
    return 0;
}