#include<stdio.h>
int main()
{
    char ch='*';

    for(int i=1;i<=5;i++)
    {
         for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int j=5;j>=i;j--)
        {   
            printf("*");
        }
        printf("\n");
    }
}