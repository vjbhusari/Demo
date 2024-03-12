#include<stdio.h>
int main()
{
    int a;
    printf("enter marks : \n");
    scanf("%d",&a);

    if(a>=35 && a<=100)
    {
        printf("student is pass ");
    }
    else if(a>100)
    {
        printf("enter valid marks");
    }
    else
    {
        printf("student is fail");
    }

    return 0;
}