#include<stdio.h>
#include<string.h>
int main()
{
    char name1[100]="ajay";
    char name2[100]="kunal";
    strcpy(name1,name2);                // cpoies valur at name2 to name1
    puts(name1);
    puts(name2);
}