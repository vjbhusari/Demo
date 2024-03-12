//                                            using function calculate sum of 2 numbers

#include<stdio.h>
 int sum();
 int main()
 {
    int a,b,s;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);

    s =sum(a,b);
    printf("sum is : %d",s);

    return 0;
 }
 int sum(int x,int y)
 {
    return x+y;
 }
