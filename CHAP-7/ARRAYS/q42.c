//             WRITE A FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN AN ARRAY

#include<stdio.h>
int countodd(int arr[],int n);
int main()
{
    int odd[]={11,12,13,14,15,16,17,15,19};
    printf("%d",countodd(odd,8));
}
int countodd(int arr[],int n)
{
    int i,count;
    count=0;
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
}