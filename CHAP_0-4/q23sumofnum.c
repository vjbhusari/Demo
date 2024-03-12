//    calculate the sun of all number between 5 and 50 (including 5 and 50)

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=5;i<=50;i++)
    {                                                         // USING FOR LOOP
        sum=sum+i;
    }
    printf("sum is S %d",sum);


    // int i=5,sum=0;
    // do
    // {
    //     sum=sum+i;
    //     i++;                                               //using do while loop
    // }
    // while(i<=50);

    // printf(" sum of 5 to 50 is %d",sum);
}