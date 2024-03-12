// PRINT THE SUM OF n NATURAL NUMBER , ALSO PRINT THEM IN REVERSE

#include<stdio.h>
int main()
{
    int a,i,sum;
    printf("enter any number : ");
    scanf("%d",&a);
    i=1;
    sum=0;
    do
    {
        sum=sum+i;
        i++;
        
    }
    while(i<=a);
    printf("sum is :%d\n",sum);
    i=a;
    do
    {
        printf("%d ",i);
        i--;
    }
    while(i>=0);
    return 0;
}