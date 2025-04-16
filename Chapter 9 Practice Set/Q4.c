/*
Q4. Write a program to illustrate the use of arrow operator → in C. 
*/
typedef struct stud
{
    float marks;
    int rank;
}student;

int main(){
    student s1;
    student* ptr = &s1;
    // (*ptr).marks = 96;
    // (*ptr).rank = 96;
    ptr->marks = 96.3;
    ptr->rank = 1;
    printf("The marks of student is %.2f and rank is %d \n", ptr->marks, ptr->rank);
    return 0;
}