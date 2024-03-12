#include<stdio.h>
int main()
{
    int a,i;
    printf("enter number : ");
    scanf("%d",&a);
    
    //for(i=0; i<=a; i++)
    //{                                   =====   using for
    //    printf("%d ",i);
    //}

    i=0;
    while(i<=a)
    {
        printf("%d ",i);             //   =====   using while
        i++;
    }
    return 0;
}