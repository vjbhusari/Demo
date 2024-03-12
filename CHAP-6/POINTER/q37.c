//        PRINT THE VALUE OF I FROM ITS POINTER TO PONTER

#include<stdio.h>
int main()
{
    int i=9;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("i=%d\n",**pptr);
}