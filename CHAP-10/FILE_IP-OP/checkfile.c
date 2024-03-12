//   check if a file exists before reading from it

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    if(fptr==NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {
        fclose(fptr);
    }

    return 0;
}