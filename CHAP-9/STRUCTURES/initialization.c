#include<stdio.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct student s1={"ajay",9,9.9};
    
    printf("student name = %s\n",s1.name);
    printf("student roll no = %d\n",s1.rollno);
    printf("student cgpa =%.1f\n",s1.cgpa);

    return 0;
}