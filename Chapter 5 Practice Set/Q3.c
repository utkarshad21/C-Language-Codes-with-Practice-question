/*
Q3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. 
*/
#include <stdio.h>

float force (float);
float force (float mass){
    return mass*9.8; // force = m * g;
}

int main(){
    int m = 45;
    printf("force of attraction on a body of mass %.2f exerted by earth is %.2f", m, force(m));
    return 0;
}