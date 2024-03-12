#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};
void printinfo(struct student s2);
int main()
{
    struct student s1={"ajay",9,8.1};
    printinfo(s1);
}

void printinfo(struct student s2)
{
    printf("name = %s\n",s2.name);
    printf("roll no = %d\n",s2.rollno);
    printf("cgpa = %.1f",s2.cgpa);
}