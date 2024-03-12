//                       find factorial of given number
#include<stdio.h>
float fact(float n);
int main()
{
    printf("factorial is : %f ",fact(4));
    return 0;
}
float fact(float n)
{
    if(n == 1)
    {
        return 1;
    }
    float fact1=fact(n-1);
    float fact2=fact1 * n;
    return fact2;
}