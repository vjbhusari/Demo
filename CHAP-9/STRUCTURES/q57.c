//   CREATE A STRUCTURE TO STORE VECTORS THEN MAKE A FUNCTION TO RETURN SUM OF 2 VECTORS

#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;
void calsum(struct vector v1,struct vector v2,struct vector sum1);
int main()
{
    vec v3={5,10};
    vec v4={6,11};
    vec sum2;

    calsum(v3,v4,sum2);
}

void calsum(struct vector v1,struct vector v2,struct vector sum1)
{
    sum1.x=v1.x+v2.x;
    sum1.y=v1.y+v2.y;

    printf("sum of x is %d\n",sum1.x);
    printf("sum of y is %d",sum1.y);

}
