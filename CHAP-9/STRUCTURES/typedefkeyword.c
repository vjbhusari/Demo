#include<stdio.h>
#include<string.h>
typedef struct computerengineeringstudent
{
    char name[100];
    int rollno;
    float cgpa;
}coe;                                         // alias(nickname) = coe , coe is alias of computerengineeringsstudent
int main()
{
    // coe s1={"ajay",9,8.1};
    coe s1;

    strcpy(s1.name,"ajay");
    s1.rollno=9;
    s1.cgpa=8.1;

    printf("student name = %s",s1.name);

    return 0;
}