#include<stdio.h>
void square(int *n);
int main()
{
    int num=4;
    square(&num);
    printf("number = %d",num);
}
void square(int *n)
{
    *n=(*n)*(*n);
    printf("square = %d\n",*n);
}