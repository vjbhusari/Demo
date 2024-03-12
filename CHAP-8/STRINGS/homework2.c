//   WRITE A PROGRAM TO PRINT THE HIGHEST FREQUENCY CHARACTER IN A STRING

#include<stdio.h>
int main()
{
    char name[100];
    char high;
    high=name[0];
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>high)
        {
            high=name[i];
        }
    }
    printf("highest frequency character is : %c",high);
}