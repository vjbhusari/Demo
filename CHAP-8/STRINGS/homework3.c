//     WRITE A PROGRAM TO REMOVE BLANK SPACEE IN A STRING

#include<stdio.h>
int main()
{
    char name[100];
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            for(int j=i;name[j]!='\0';j++)
            {
                name[j]=name[j+1];
            
            }
        }
    }
   puts(name);
}