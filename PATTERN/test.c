#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p,q,r,s,t,u,a=5;
    int b=a-1;

    for(i=1;i<=a;i++)
    {
        {
            for(j=i;j<=a;j++)
            {
                printf("*");
            }
            for(k=1;k<i;k++)
            {
                printf("+");
            }
            if(i>=3)
            {
                for(l=1;l<i-1;l++)
                {
                    printf("+");
                }
            }
            if(i==1)
            {
                for(m=1;m<=a-1;m++)
                {
                    printf("-");
                }
            }
            else
            {
                for(n=i;n<=a;n++)
                {
                    printf("*");
                }
            }

            printf("\n");
        }
    }

    for(o=1;o<=b;o++)
    {   
        for(q=1;q<=o+1;q++)
        {
            printf("*");
        }
        for(r=o;r<b;r++)
        {
            printf("+");
        }
        for(s=o;s<b-1;s++)
        {
            printf("+");
        }
        if(o==1 || o==2 || o==3)
        
        for(t=1;t<=o+1;t++)
        {
            printf("*");
        }
        
        else
        {
            for(u=1;u<=b;u++)
            {
                printf("-");
            }
        }

        printf("\n");
    }
    
}