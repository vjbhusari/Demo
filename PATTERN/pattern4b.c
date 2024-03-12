// 
//      * * * * *    
//        * * *
//          * 
// 

#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a=3;

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
        for(l=i;l<a;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}