#include<stdio.h>
int main()
{
    int marks[2][3];
    // int marks[2][3]={{90,81,72},{63,54,45}};

    marks[0][0]=90;
    marks[0][1]=81;
    marks[0][2]=72;

    marks[1][0]=63;
    marks[1][1]=54;
    marks[1][2]=45;

    printf("%d %d",marks[0][0],marks[1][2]);


}