#include<stdio.h>
int main()
{
    int day;
    printf("enter day(1-7) : \n");
    scanf("%d",&day);
    switch(day)
    {                                                    // for character we use single quote
        case 1 : printf("monday\n");                     // case 'a' : printf("monday\n");
                 break;                                  //            break;   
        case 2 : printf("tuesday\n");
                 break;                                  //  cases can be in any order
        case 3 : printf("wednesday\n");
                 break;
        case 4 : printf("thursday\n");
                 break;
        case 5 : printf("friday\n");
                 break;
        case 6 : printf("saturday\n");
                 break;
        case 7 : printf("sunday\n");
                 break;
        default : printf("not a vaild day!");
    }
    
}