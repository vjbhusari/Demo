//              * 
//            * *
//          * * * 
//        * * * *
//      * * * * *

#include<stdio.h>
int main()
{
    int i,j,k,a=5;
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=a-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}   