//         using function print the table of n given by user

#include<stdio.h>
void table(int n);
int main()
{
    int n;
    printf("enter number to print table : ");
    scanf("%d",&n);

    table(n);                 // (n) = ARGUMENT , ACTUAL PARAMETER

}
void table(int n)            //  (int n) = PARAMETER , FORMAL PARAMETER
{
    for(int i=1;i<=10;i++)
    {
        printf("%d ",i*n);
    }
}
