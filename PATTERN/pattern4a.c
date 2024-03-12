// 
//          *
//        * * *
//      * * * * *

#include<stdio.h>
int main()
{
    int i,j,k,l,a=3;

    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        for(l=1;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}