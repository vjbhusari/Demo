//                WRITE A PROGRAM TO ENTER PRICE OF 3 ITEMS & PRINT THEIR FINAL COST WITH GST 

#include<stdio.h>
int main()
{
    float item[3];
    printf("enter 3 prices : ");
    scanf("%f",&item[0]);
    scanf("%f",&item[1]);
    scanf("%f",&item[2]);
    printf("final price with GST is %f\n",item[0]+0.18*item[0]);
    printf("final price with GST is %f\n",item[1]+0.18*item[1]);
    printf("final price with GST is %f\n",item[2]+0.18*item[2]);
}