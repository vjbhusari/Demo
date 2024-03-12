//   *
//   * *
//   * * *
//   * * * *
//   * * * * *
//   * * * *
//   * * *
//   * *
//   *

#include<stdio.h>
int main()
{   
    int i,j,k,a=5;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
       
        printf("\n");
    }
     for(k=1;k<j-1;k++)
        {
            for(int x=1;x<=a-k;x++)
            {

                printf("*");
            }
                    printf("\n");
        }


}