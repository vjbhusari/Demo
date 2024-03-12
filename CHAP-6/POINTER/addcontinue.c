#include<stdio.h>
#include<stdbool.h>
void add();
int main()
{
   // int x,y;
   
//    while(1)
//    {
    // printf("enter a ");
    // scanf("%d",&x);
    
    // printf("enter b ");
    // scanf("%d",&y);

    // if(add(x,y))
    // {
    //     break;
    // }
    
//    }

   add();


}

void add()
{
    int sum,x,y;
    
    printf("enter a ");
    scanf("%d",&x);
    
    printf("enter b ");
    scanf("%d",&y);
    
    sum=x+y;
    if(sum>2000){
  
       printf( "given correct num are %d , %d",x,y);
    }
    else
    {

        add();

    }
        

}
