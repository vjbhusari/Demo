#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("ADULT");

    }
    // we can add multiple else if 
    else if(age>=13 && age<18)
    {
        printf("TEENAGER");
    }
    else
    {
        printf("CHILD");
    }
    return 0;
}