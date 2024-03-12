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
    struct student ece[100];
    strcpy(ece[0].name,"ajay");
    ece[0].rollno=1;
    ece[0].cgpa=6.3;

    strcpy(ece[1].name,"vijay");
    ece[1].rollno=2;
    ece[1].cgpa=6.4;

    strcpy(ece[2].name,"apeksha");
    ece[2].rollno=3;
    ece[2].cgpa=6.5;

    strcpy(ece[3].name,"kunal");
    ece[3].rollno=4;
    ece[3].cgpa=6.6;

    strcpy(ece[4].name,"vaibhav");
    ece[4].rollno=5;
    ece[4].cgpa=6.7;

    strcpy(ece[5].name,"vaishnavi");
    ece[5].rollno=5;
    ece[5].cgpa=6.8;

    printf("name = %s\n",ece[0].name);
    printf("roll no = %d\n",ece[1].rollno);
    printf("cgpa = %.1f\n",ece[2].cgpa);
    printf("name = %s\n",ece[3].name);
    printf("roll no = %d\n",ece[4].rollno);
    printf("cgpa = %.1f\n",ece[5].cgpa);
    
}