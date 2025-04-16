/*
Q3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab            Tax            
2.5 – 5.0L              5%                  
5.0L - 10.0L            20%              
Above 10.0L             30%    
Note that there is no tax below 2.5L. Take income amount as an input from the user.        
*/
#include <stdio.h>

int main(){
    float income_slab, tax_paid=0;
    printf("Give the Income Slab value to calculate the tax paid: \n");
    scanf("%f", &income_slab);
    if (income_slab <= 250000)
    {
        tax_paid = 0;
        printf("There is no tax below 2.5L is %f\n", tax_paid);
    }
    else if (income_slab > 250000 && income_slab < 500000)
    {
        tax_paid = 0.05 * (income_slab - 250000);
        printf("The income tax paid by an employee to the government between Income Slab 2.5-5.0L is: %f\n", tax_paid);
    }
    else if (income_slab >= 500000 && income_slab < 1000000)
    {
        tax_paid = 0.05 * (500000 - 250000) + 0.2 * (income_slab - 500000);
        printf("The income tax paid by an employee to the government between Income Slab 5.0-10.0L is: %f\n", tax_paid);
    }
    else
    {
        tax_paid = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income_slab - 1000000);
        printf("The income tax paid by an employee to the government above Income Slab 10.0L is: %f\n", tax_paid);
    }
    
    return 0;
}