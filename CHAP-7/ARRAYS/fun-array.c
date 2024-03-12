#include<stdio.h>
void printno(int arr[],int n);                                 // int n = size of array
int main()
{
    int no[]={10,20,30,40,50,60,70,80,90};                   // 9 = size of array
    printno(no,9);                         
    return 0;
}

void printno(int arr[],int n)           // int n = size of array
{

    for (int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}