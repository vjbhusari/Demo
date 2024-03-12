

#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    char name1[100];
    int x,i,j,y;
    gets(name);
    strlen(name);
    x=strlen(name);
    for( i=x-1,j=0;i>=0;i--,j++)
    {
        name1[j]=name[i];
    }
    name1[j]='\0';
  //  puts(name1);    
   
     for(y=0;name1[y]!='\0';y++)
     {
         printf("%c",name1[y]);
     }


    
}