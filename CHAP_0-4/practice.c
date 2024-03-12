#include<stdio.h>
int main()
{
//     int i,sum=0;
//     for(i=5;i<=50;i++)
//     {
//         sum=sum+i;
//     }
//     printf("sum of 5 to 50 is %d ",sum);
    
//     return 0;

    int i=5,sum=0;
    do
    {
        sum=sum+i;
        i++;                                               //using do while loop
    }
    while(i<=50);

    printf(" sum of 5 to 50 is %d",sum);
}