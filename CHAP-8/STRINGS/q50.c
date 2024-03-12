//       TAKE A STRING INPUT FROM THE USER USING %C

#include<stdio.h>
#include<string.h>
int main()
{
    char name[18];
    char ch,i=0;

    while(ch!='\n')
    {
        scanf("%c",&ch);
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    puts(name);

}