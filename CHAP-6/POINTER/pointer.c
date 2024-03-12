#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    int xyz=*ptr;

    // printf("%u",xyz);
  
    // WE USE %u INSTED OF %p
    printf("%u\n",&age);                 // TO PRINT ADDRESS OF AGE 
    printf("%u\n",ptr);                  // TO PRINT PTR  (ptr=pointer variable name)
    printf("%u\n",&ptr);                 // TO PRINT ADDRESS OF PTR (ptr=pointer variable name)
    printf("%d\n",age);                  // TO PRINT VALUE STORE IN age
    printf("%d\n",*ptr);                 // TO PRINT VALUE OF ADDRESS STORED IN ptr
    printf("%d",*(&age));                // TO PRINT VALUE STORE AT ADDRESS OF age 
}