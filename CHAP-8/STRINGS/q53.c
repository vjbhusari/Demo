//    WRITE A FUNCTION TO COUNT THE OCCURENCE OF VOWELS IN A STRING

#include<stdio.h>
int count(char name2[]);
int main()
{
    char name[100];
    gets(name);
    count(name);
}

int count(char name2[])
{
    int i,count=0;
    for (i=0;name2[i]!='\0';i++)
    {
        if(name2[i]=='a'|| name2[i]=='e'|| name2[i]=='i'|| name2[i]=='o'|| name2[i]=='u')

        count++;
    }
    printf("count is %d",count);
}