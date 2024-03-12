#include<stdio.h>                           // WAP to give grade student 
int main()
{
    int a;
    printf("enter marks : \n");
    scanf("%d",&a);

    if(a<30)
    {
        printf("C GRADE");
    }
    else if (a>=30 && a<70)
    {
        printf("B GRADE");
    }
    else if (a>=70 && a<90)
    {
        printf("A GRADE");
    }
    else if (a>=90 && a<=100)
    {
        printf("A+ GRADE");
    }
    else
    {
        printf("enter valid marks");
    }

    return 0;
}