//       write a function to calculate percentage of astudent from marks in science , math & sanskrit
#include<stdio.h>
float percentage(float x,float y,float z); 

int main()
{
    int a,b,c;
    printf("enter marks in science : \n");
    scanf("%d",&a);
    printf("enter marks in math : \n");
    scanf("%d",&b);
    printf("enter marks in sanskrit : \n");
    scanf("%d",&c);

    printf("percentage is :%.2f ",percentage(a,b,c));


    return 0;
}
float percentage(float x,float y,float z)
{
    float per= ((x + y + z )/ 300)*100;
    return per;
}