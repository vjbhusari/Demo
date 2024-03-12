// WRITE A PROGRAM TO CONVERT ALL LOWERCASE VOWELS TO UPPERCASE IN A STRING

#include<stdio.h>
#include<ctype.h>
int main()
{
    char string[100];
    gets(string);
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'|| string[i]=='e' || string[i]=='i'|| string[i]=='o' || string[i]=='u')
        {
            string[i]=(string[i]-32);
        }
    }
    puts(string);

    return 0;
}
