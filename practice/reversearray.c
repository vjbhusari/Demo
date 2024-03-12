#include <stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int a;
    for(int i=0; i<6/2; i++){
        a=arr[i];
        arr[i]=arr[6-i-1];
        arr[6-i-1]=a;
    }
    for(int i = 0; i < 6; i++){
        printf("%d,", arr[i]);
    }
}    