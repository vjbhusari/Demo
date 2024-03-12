//    WRITE A PROGRAM TO STORE THE DATA OF 3 STUDENTS

#include<stdio.h>
#include<string.h>
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
    printf("student cgpa is %.1f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"vijay");
    s2.rollno=10;
    s2.cgpa=9.8;

    printf("student name is %s\n",s2.name);
    printf("student roll no is %d\n",s2.rollno);
    printf("student cgpa is %.1f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"apeksha");
    s3.rollno=11;
    s3.cgpa=9.7;

    printf("student name is %s\n",s3.name);
    printf("student roll no is %d\n",s3.rollno);
    printf("stdudent cgpa is %.1f\n",s3.cgpa);

    return 0;
}