#include<stdio.h>
int main()
{
    int a;
    printf("enter number : \n");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("number is positive \n");
        if(a%2==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
        
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}