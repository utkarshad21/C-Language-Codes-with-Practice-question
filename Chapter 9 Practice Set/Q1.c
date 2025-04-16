/*
Q1. Create a two-dimensional vector using structures in C.
*/
#include <stdio.h>

typedef struct
{
    float i;
    float j;
}vec;
// another techniques
struct vector{
    int p;
    int q;
};
int main(){
    vec v = {44, 76};
    
    printf("Value of vector is i = %.2f, j = %.2f\n", v.i, v.j);

// another techniques
struct vector u = {20, 31};
printf("The value of vector is %d p + %d q", u.p, u.q);
{
    /* data */
};

    return 0;
}


/*
#include <stdio.h>

// Define a structure for a 2D vector
typedef struct {
    float x;
    float y;
} Vector2D;

// Function to add two vectors
Vector2D addVectors(Vector2D v1, Vector2D v2) {
    Vector2D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

// Function to multiply a vector by a scalar
Vector2D scalarMultiply(Vector2D v, float scalar) {
    Vector2D result;
    result.x = v.x * scalar;
    result.y = v.y * scalar;
    return result;
}

// Function to display a vector
void displayVector(Vector2D v) {
    printf("Vector: (%.2f, %.2f)\n", v.x, v.y);
}

int main() {
    Vector2D v1 = {3.5, 4.2};
    Vector2D v2 = {1.5, -2.3};

    printf("Initial vectors:\n");
    displayVector(v1);
    displayVector(v2);

    Vector2D sum = addVectors(v1, v2);
    printf("\nSum of vectors:\n");
    displayVector(sum);

    float scalar = 2.0;
    Vector2D scaled = scalarMultiply(v1, scalar);
    printf("\nVector v1 multiplied by %.2f:\n", scalar);
    displayVector(scaled);

    return 0;
}

*/