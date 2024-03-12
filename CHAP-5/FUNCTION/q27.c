//                 write 2 functions-one to print "hello" & second to print "good bye"

#include<stdio.h>

void hello();
void goodbye();

int main()
{
    hello();
    goodbye();
    goodbye();      

    return 0;
}

void hello()
{
    printf("hello\n");
}

void goodbye()
{
    printf("good bye\n");
}

