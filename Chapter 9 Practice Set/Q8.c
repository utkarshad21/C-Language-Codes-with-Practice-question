/*
Q8. Create a structure representing a bank account of a customer. What fields did 
you use and why? 
*/

typedef struct cus
{
    int customer_id;
    int accountNo;
    char name[34];
    char ifsc[12];
    float balance;

}customer;

int main() {
    // Initializing the structure
    customer c1 = {101, 123456789, "John Doe", "IFSC123456", 5000.75};

    // Corrected printf statement with appropriate format specifiers
    printf("Customer Bank Account Details:\n");
    printf("Customer ID: %d\n", c1.customer_id);
    printf("Account No: %d\n", c1.accountNo);
    printf("Name: %s\n", c1.name);
    printf("IFSC Code: %s\n", c1.ifsc);
    printf("Balance: %.2f\n", c1.balance);

    return 0;
}