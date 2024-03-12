//    CHECK IF A GIVEN CHARACTER IS PRESENT IN A STRING OR NOT

#include<stdio.h>
void check(char string1[],char a);
int main()
{
    char string[100]="ajay bhusari";
    int ch='a';
    check(string,ch);
    
}

void check(char string1[],char a)
{
    int i;
    for (i=0;string1[i]!='\0';i++)
    {
        if(string1[i]==a)
        {
            printf("character is present\n");
            return;
        }
    }
    printf("character is not present");

}