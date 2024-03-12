//     WRITE A FUNCTION TO REVERSE AN ARRAY
#include<stdio.h>
int reverse(int arr[],int n);
int main()
{
    int no[]={1,2,3,4,5,6,7,8,9};
    reverse(no,8);
}
int reverse(int arr[],int n)
{
    int i;
    for(i=n;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }    
}
