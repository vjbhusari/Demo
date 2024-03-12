#include<stdio.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct student s1={"ajay",9,8.1};
    printf("roll no = %d\n",s1.rollno);

    struct student *ptr=&s1;
    printf("roll no = %d\n",(*ptr).rollno);
    printf("roll no = %d",ptr->rollno);             // using arrow operator (->)

}