//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *

#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a=1;

    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }printf("\n");
    }
    for(l=1;l<=a-1;l++)
    {
        for(m=1;m<=l;m++)
        {
            printf(" ");
        }
        for(n=l;n<a;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}