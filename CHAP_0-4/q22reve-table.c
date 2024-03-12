//                        print reverse of the table for a number n 

#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
                                                           // USING FOR LOOP
    for(int i=10;i>=1;i--)
    {
        printf("%d ",i*n);
    }


    // int n;
    // printf("enter table : ");
    // scanf("%d",&n);
    // int i=10;
    // do                                                // USING DO WHILE LOOP
    // {
    //     printf("%d\n",i*n);
    //     i--;
    // }
    // while(i>=1);

}