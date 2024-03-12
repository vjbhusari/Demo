#include<stdio.h>
int main()
{
    int aadhar[5];

    //input
    int*ptr=&aadhar[0];
    for(int i=0;i<5;i++)
    {
        printf("enter %d value : ",i);
        scanf("%d",&aadhar[i]);
    }

    //output
    for(int i=0;i<5;i++)
    {
        printf("value at %d position is  = %d\n",i,aadhar[i]);
    }
    return 0;
}