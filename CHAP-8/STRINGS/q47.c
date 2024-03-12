//   CREATE A STRING FIRSTNAME & LASTNAME TO STORE A DETAILS OF USER & PRINT ALL THE CHARACTER USING LOOP

#include<stdio.h>
void printname(char arr[]);
int main()
{
    char firstname[]="ajay";
    char lastname[]="bhusari";

    printname(firstname);
    printname(lastname);
}

void printname(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");

}