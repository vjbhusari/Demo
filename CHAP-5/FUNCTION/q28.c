//             write a function that prints NAMSTE if user is indian & bonjour if the user is french 

#include<stdio.h>

void namste();
void bonjour();

int main()
{
    char ch;
    printf("enter f for french & enter i for indian : ");
    scanf("%c",&ch);

    if(ch=='i')
    {
        namste();
    }

    else if(ch=='f')
    {
        bonjour();
    }

    else
    {
        printf("enter valid nationality");
    }
    
    return 0;
}
void namste()
{
    printf("namste\n");
}
void bonjour()
{
    printf("bonjour");
}