#include<stdio.h>
#include<string.h>
int main()
{
    char name1[]="ajay rajendra";
    char name2[]="bhusari";
    strcat(name1,name2);           // adding valut at name2 to name 1 , while storing there is no space beteen name1 & name 2 
    puts(name1);
}