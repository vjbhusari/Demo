#include<stdio.h>
float per(float a,float b,float c);
int main()
{
    float sci,mat,sans;
    
    printf("enter science marks : ");
    scanf("%f",&sci);
    
    printf("enter math marks : ");
    scanf("%f",&mat);
    
    printf("enter sanskrit marks : ");
    scanf("%f",&sans);
    
    printf("percentage is : %.3f",per(sci,mat,sans));
}

float per(float a,float b,float c)
{
    float per=(a+b+c)/300*100;
    return per;
}