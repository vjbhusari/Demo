#include<stdio.h>
#include<string.h>
// user defined
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1;
    strcpy(s1.name,"ajay");
    s1.rollno=9;
    s1.cgpa=9.9;

    printf("student name is %s\n",s1.name);
    printf("student roll no is %d\n",s1.rollno);
    printf("student cgpa is %f\n",s1.cgpa);

    return 0;
}