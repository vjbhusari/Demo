//   CREATE A STRUCTURE TO STORE COMPLEX NUMBERS (USE ARROW OPERATOR)

#include<stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex number1={4,5};
    struct complex *ptr=&number1;

    printf("real no is %d\n",ptr->real);
    printf("img no is %d",ptr->img);
}
