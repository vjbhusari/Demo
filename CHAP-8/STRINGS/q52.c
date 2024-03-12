//     WRITE A FUNCTION NAMED SLICE , WHICH TAKES A STRING & RETURNS A SLICED STRING FROM INEDX N TO M

#include<stdio.h>
void slice(char string1[],int n,int m);
int main()
{
    char string[100];
    gets(string);
    slice(string,3,6);
}
void slice(char string1[],int n,int m)
{
    char string2[100];
    int i,j;
    for(i=n,j=0;i<=m;i++,j++)
    {
        string2[j]=string1[i];
    }
    string2[j]='\0';
    
    puts(string2);
}