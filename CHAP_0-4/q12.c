#include<stdio.h>
int main()
{
    char ch;
    printf("enter one character : \n");
    scanf("%c",&ch);
    
    if (ch >= 'a' && ch <= 'z')
    {
        printf("given character is lower case");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("given character is upper case");
    }
    else 
    {
        printf("enter valid character");
    }
    
    return 0;
}