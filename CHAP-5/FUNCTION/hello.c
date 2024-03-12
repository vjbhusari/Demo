#include<stdio.h>
void printhello();          // DECLARATION / PROTOTYPE
int main()
{
    printhello();           // FUNCTION CALL
    printhello();
    printhello();
    printhello();

    return 0;
}

void printhello()           // FUNCTION DEFINATION
{
    printf("hello\n");
}