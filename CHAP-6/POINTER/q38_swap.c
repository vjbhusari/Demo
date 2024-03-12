//                        SWAP 2 NUMBER,A&B

#include<stdio.h>
void swap(int *x,int*y);
int main()
{
    int a=3,b=5;
    printf("a=%d ",a);
    printf("b=%d\n",b); 
    swap(&a,&b);                                    // call by reference
    printf("a=%d ",a);
    printf("b=%d\n",b);                               
    
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("x=%d ",*x);
    printf("y=%d\n",*y);
}


// #include<stdio.h>
// void swap(int x,int y);
// int main()
// {
//     int a=3,b=5;
//     printf("a=%d b=%d\n",a,b);
//     swap(a,b);
//     printf("a=%d b=%d",a,b);
// }                                                   // call by value
// void swap(int x,int y)
// {
//     int t;
//     t=x;
//     x=y;
//     y=t;
//     printf("x=%d y=%d\n",x,y);
// }