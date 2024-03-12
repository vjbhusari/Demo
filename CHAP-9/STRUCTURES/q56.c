//      ENTER ADDRESS (HOUSE NO , BLOCK , CITY , STATE) OF 5 PEOPLE

#include<stdio.h>
#include<string.h>
struct address
{
    int houseno;
    int block;
    char city[20];
    char state[20];
};
void printadd(struct address a1);
int main()
{
    struct address add[5];

    printf(" enter info for person 1 : ");
    scanf("%d",&add[0].houseno);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);
    printf(" enter info for person 2 : ");
    scanf("%d",&add[1].houseno);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);
     printf(" enter info for person 3 : ");
    scanf("%d",&add[2].houseno);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);
    printf(" enter info for person 4 : ");
    scanf("%d",&add[3].houseno);
    scanf("%d",&add[3].block);
    scanf("%s",add[3].city);
    scanf("%s",add[3].state); 
    printf(" enter info for person 5 : ");
    scanf("%d",&add[4].houseno);
    scanf("%d",&add[4].block);
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);

    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);

    return 0;
}
void printadd(struct address a1)
{
    printf("address is : %d , %d , %s , %s\n",a1.houseno,a1.block,a1.city,a1.state);
} 