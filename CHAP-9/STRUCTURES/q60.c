//  MAKE A STRUCTURE TO STORE BANK ACCOUNT INFORMATION OF A CUSTOMER OF ABC BANK ALSO , MAKE AN ALIAS FOR IT

#include<stdio.h>
typedef struct bankaccount
{
    int accno;
    char name[100];
}acc;
int main()
{
    acc a1={123,"ajay"};
    acc a2={124,"vijay"};
    acc a3={125,"kunal"};
    acc a4={126,"vaibhav"};

    printf("account no is %d\n",a1.accno);
    printf("name is %s",a1.name);
}