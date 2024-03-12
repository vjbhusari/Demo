//             keep taking numer as input from user until user enters a number which is multiple of 7

#include<stdio.h>
int main()
{
    // int a;
    // do
    // {
    //     printf("enter any number : ");
    //     scanf("%d",&a);
    //     printf("%d\n",a);                                      using do while loop
    //     if(a %7 ==0)
    //     {
    //         break;
    //     }
    // }
    // while(1);


     int a,i;

    for(i=0;((a%7)!=0);i++)
    {
        printf("enter any number");                     // using for loop
        scanf("%d",&a);
    }


}

