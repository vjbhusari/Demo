//                write function to convert celsius into fahrenite
#include<stdio.h>
float fahere(float celsius);
int main()
{
    printf("conversion of celsius to fahrenite is : %f",fahere(32));
    return 0;
}
float fahere(float celsius)
{
    // float a = n * (9.0/5.0) + 32;
    float a = celsius * 1.8 + 32;
    return a;
}