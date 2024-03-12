//      WRITE A PROGRAM TO PRINT THE LARGEST NUMBER IN AN ARRAY

#include<stdio.h>
int main()
{
    int num[9]={11,22,33,445599,55,666,77,88,9999999};
    // int *no=&num[9];
    // int length=sizeof(num)/sizeof(num[0]);
    // printf("length is %d \n",length);
    int largeno;
    for(int i=0;i<9;i++)
    {
        printf("%d ",num[i]);
        if(num[i]>largeno)
        {
            largeno=num[i];
        }
    }
    printf("\nlargest number in array is %d",largeno);
}