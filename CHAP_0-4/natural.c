#include<stdio.h>
int main()
{
    int a;
    printf("ENTER ANY NO : ");
    scanf("%d",&a);
    if(a>=1)
    {
        printf("given number is natural");
    }
    else
    {
        printf("given no is not natural");
    }
    return 0;
}