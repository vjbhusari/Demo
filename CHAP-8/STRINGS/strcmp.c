#include<stdio.h>
#include<string.h>
int main()
{
    char name1[100]="ajay";
    char name2[100]="vijay";
    char name3[100]="apple";
    char name4[100]="ajay";
    printf("%d\n",strcmp(name1,name2));           // name1 < name2   substracting 1st character ascii value a-v(ascii value)
    printf("%d\n",strcmp(name2,name1));           // name2 > name1   substracting 1st character ascii value v-a(ascii value)
    printf("%d\n",strcmp(name1,name3));     // name1 < name2 1st character is same in both string so use 2nd character. j-p(ascii value)
    printf("%d\n",strcmp(name1,name4));     // both string have same value so substarction is zero 0

}


//        if return value is -ve  it prints -1
//        if return value is +ve  it prints 1
//        if return value is 0  it prints 0