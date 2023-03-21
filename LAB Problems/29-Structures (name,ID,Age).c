#include<stdio.h>
struct student_details
{
    char *name;
    int ID;
    int Age;
};
int main()
{
    struct student_details student;
    student.name="Sri kumar";
    student.ID=23;
    student.Age=18;
    printf("Student name is: %s\nStudent ID is: %d\nStudent Age is: %d",student.name,student.ID,student.Age);
    return 0;
}
