#include<stdio.h>
int table(int n);
int main()
{
    int a;
    printf("enter any number : ");
    scanf("%d",&a);
    table(a);
}

int table(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
}