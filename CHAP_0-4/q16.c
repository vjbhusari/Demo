//  PRINT THE TABLE OF A NUMBER INPUT BY THE USER

#include<stdio.h>
int main()
{
    int a;
    printf("enter any number : \n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
       printf("%d ",i*a);
    }
}