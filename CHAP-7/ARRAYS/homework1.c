//  IN AN ARRAY OF NUMBER FIND HOW MANY TIMES DOES A NUMBER X OCCURS

#include<stdio.h>
int main()
{
    int num[9]={11,22,33,44,55,66,11,11,99};
    int x=11,count=0;

    for(int i=0;i<9;i++)
    {   
        // printf("%d ",num[i]);
        if(num[i]==x)
        {
            count++;
        }
        
    }
    printf("count = %d",count);
}