/*
Q9. Write a structure capable of storing date. Write a function to compare those 
dates. 
*/
/*
10. Solve problem 9 for time using ‘typedef’ keyword. 
*/
typedef struct dates
{
    int dd;
    int mm;
    int yyyy;
}date;

int compare(date d1, date d2){
    if ((d1.yyyy == d2.yyyy)&& (d1.mm == d2.mm)&&(d1.dd == d2.dd)){
        return 0;
    }

    
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}


int main(){
    date d1 = {16, 03, 2025};
    date d2 = {16, 03, 2025};

    
    
    printf("%d\n", compare(d1, d2)); 
    return 0;

}
// typedef struct d1
// {
//     int date_no;
//     char month[12];
//     int year;
// } date;

// int main(){
//     date date1 = {21, "February", 2003};
    
    
//     printf("My birthdate is: %d, %s, %d \n", date1.date_no, date1.month, date1.year);
// }