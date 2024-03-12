#include<stdio.h>
float square(float side);
float circle(float radius);
float rectangle(float length ,float breadth);
int main()
{
    float a,l,b,r;

    printf("enter side : ");
    scanf("%f",&a);
    square(a);

    printf("enter length : ");
    scanf("%f",&l);
    printf("enter breadth : ");
    scanf("%f",&b);
    printf("area of rectangle is : %f\n",rectangle(l,b));

    
    printf("enter radius : ");
    scanf("%f",&r);
    printf("area of circle is : %f\n",circle(r));
}
float square(float side)
{
    printf("area of square is %f\n ",side*side);
    // return side*side;
}
float circle(float radius)
{
    // printf("area of circle is : %f\n",radius);
    return 3.14*radius*radius; 
}
float rectangle(float length ,float breadth)
{
    return length*breadth;
}

