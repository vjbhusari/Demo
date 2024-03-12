#include<stdio.h>

void hello(int a);

int main()
{  
   hello(4);
    return 0;
}
//   RECURSIVE FUNCTIO
void hello(int a)
{
    if(a == 0)
    {
        return;
    }
//    printf("hello ajuu :%d\n",a);
    hello(a-1);
    printf("hello ajuu :%d\n",a);
}