//      * * * * *
//        * * * *
//          * * *
//            * *
//              *

#include<stdio.h>
int main()
{
    int i,j,k,a=5;
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=a;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}