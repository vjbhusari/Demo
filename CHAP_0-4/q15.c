// PRINT THE SUM OF n NATURAL NUMBER , ALSO PRINT THEM IN REVERSE

#include<stdio.h>
int main()
{
    int a;
    printf("enter natural number : ");
    scanf("%d",&a);

   int sum=0;
   for(int i=1; i<=a; i++)
   {
       sum=sum+i;
   }
     printf("sum is : %d\n",sum);
   for(int i=a; i>=1; i--)
   {
      printf("%d\n",i);
    }

    // int sum=0,i=1;
    // do
    // {
    //     sum=sum+i;
    //     i++;
    // }                                                    USING DO-WHILE LOOP
    // while(i<=a);
    // printf("sum is %d\n",sum);

    // int j=a;
    // do
    // {
    //     printf("%d \n",j);
    //     j--;
    // }
    // while(j>=0);
    
}