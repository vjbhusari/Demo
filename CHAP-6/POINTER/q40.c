//        write a function to calculatwe the sum , product & average of 2 numbers.
//        print the sum , product & average in main function

#include<stdio.h>
int dowork(int a,int b,int *sum,int *prod,float *avg);
int main()
{
    int x=9,y=9,sum,prod;
    float avg;
    int s=dowork(x,y,&sum,&prod,&avg);
    printf("\n sum is %d",s);
}
int dowork(int a,int b,int *sum,int *prod,float *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
    printf("sum is %d prod is %d avg is %.2f",*sum,*prod,*avg);
    return *sum;
}