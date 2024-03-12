              //CODE IS GIVEN WILL THE ADDRESS OUTPUT BE SAME
              // ANS = NO ADDRESS WILL BE THE DIFFERENCE

#include<stdio.h>
void printadd(int n);
int main()
{
    int n=4;
    printf("%p\n",&n);
    printadd(n);

    return 0;
}

void printadd(int n)
{
    printf("%p\n",&n);
}