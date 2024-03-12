#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("ptr=%u\n",ptr);
    ptr++;
    printf("ptr=%u\n",ptr);                         // address will be incresed/decresed by 4(the size of data type int)
    ptr--;
    printf("ptr=%u\n",ptr);
}

// {
//     float age=22.23;
//     float *ptr=&age;
//     printf("ptr=%u\n",ptr);
//     ptr++;
//     printf("ptr=%u\n",ptr);                         // address will be incresed/decresed by 4(the size of data type float)
//     ptr--;
//     printf("ptr=%u\n",ptr);
// }

// {
//     char star='*';
//     char *ptr=&star;
//     printf("ptr=%u\n",ptr);
//     ptr++;
//     printf("ptr=%u\n",ptr);                         // address will be incresed/decresed by 1(the size of data type char)
//     ptr--;
//     printf("ptr=%u\n",ptr);
// }