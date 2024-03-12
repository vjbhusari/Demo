//    MAKE A PROGRAM THAT INPUTS USER'S NAME & PRINTS ITS LENGTH

#include<stdio.h>
int countlength(char string[]);
int main()
{
    char name[100];
    gets(name);
    printf("length is %d ",countlength(name));
}

int countlength(char string[])
{
    int i,count=0;
    for(i=0;string[i]!='\0';i++)
    {
        count++;
    }
    return count;
}