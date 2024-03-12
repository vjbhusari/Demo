// write a function to print n terms of the fibonacci sequence

#include<stdio.h>
float fib(int n);
int main()
{
    printf("fibonacci is :%.f ",fib(11));
    return 0;
}
float fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n ==1)
    {
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;    
    return fibn;


}