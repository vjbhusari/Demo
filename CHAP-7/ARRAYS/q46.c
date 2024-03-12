//     CREATE A 2D ARRAY STORING THE TABLE OF 2 & 3

#include<stdio.h>
void storetable(int **tables,int x);
int main()
{
    int table1[2][10];
    int *ptr=&table1[0][0];
    int *ptr2=&table1[1][0];
    storetable(&ptr,4);
    storetable(&ptr2,5);
    
    for(int j=0;j<10;j++)
    {
         printf("%d ",table1[0][j]);
    }

    printf("\n");
    for(int j=0;j<10;j++)
    {
         printf("%d ",table1[1][j]);
    }


}

void storetable(int **tables,int x)
{
    int i;
    for(int i=1;i<=10;i++)
    {
        **tables=i*x;
    }
}