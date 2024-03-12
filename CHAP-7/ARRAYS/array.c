#include<stdio.h>
int main()
{
    int marks[3];
    
    printf("enter physics marks : ");
    scanf("%d",&marks[0]);
    
    printf("enter chemistry marks : ");
    scanf("%d",&marks[1]);
    
    printf("enter maths marks : ");
    scanf("%d",&marks[2]);

    printf("phy=%d chem=%d mat=%d",marks[0],marks[1],marks[2]);

}