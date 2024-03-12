//                            KEEP TAKING NUMBER AS INPUT FROM USER UNTIL USE ENTERS AN ODD NUMBER

#include<stdio.h>
int main()
{
    int a;
  do
  {
        printf("Enter nu :"); 
        scanf("%d",&a);                               // USING DO-WHILE LOOP
        if(a %2 != 0)
        {
            break;
        }
  }
  while(1);

    //   int i,a;
    // a=0;
    // for(i=0;((a%2)==0);i++)
    // {                                                    USING FOR LOOP
    //     printf("enter any number");                       
    //     scanf("%d",&a);
        
    // }

}
