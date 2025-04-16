/*
6. Create an array of 5 complex numbers created in Problem 5 and display them 
with the help of a display function. The values must be taken as an input from 
the user. 
*/
typedef struct c
{
    int real;
    int imaginary;
}complex;

void display(complex c){
    printf("The complex number is %d + %di \n", c.real, c.imaginary); // a + bi
}
int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part %d: \n", i);
        scanf("%d", &(carr[i].real));
        printf("Enter imaginary part %d: \n", i);
        scanf("%d" , &(carr[i].imaginary));
        display(carr[i]);
    }

    return 0;
}