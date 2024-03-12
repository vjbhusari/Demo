// WRITE A PROGRAM TO REPLACE LOWERCASE LETTERS TO UPPERCASE & VICE VERSA IN A STRING

#include<stdio.h>
#include<ctype.h>
int main()
{
    char string[100];
    gets(string);
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if(islower(string[i]))
        {
            string[i]=toupper(string[i]);
        }
        else if(isupper(string[i]))
        {
            string[i]=tolower(string[i]);
        }
    }
    puts(string);

    return 0;
}