#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        if(i==7)
        {
            continue;
        }
        printf("%d ",i);
    }
}