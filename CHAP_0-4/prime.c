//             wap to check if a number is primr or not

#include<stdio.h>
#include<stdbool.h> 

int main()
{
    int n,i=1;
    bool jadya=true;

    printf("enter any number : ");
    scanf("%d",&n);

   for(int j=2;j<n;j++){
    if(n%j==0){
        jadya=false;
    }
   }

   if(jadya==true)
   {
       
        printf("given no. is prime");
    }else{
         printf("given no. is not prime");
    }

    // if((6*n+1)%2==0)
    // {
    //     printf("given no. is not prime");
    // }
    // else
    // {
    //     printf("given no. is prime");
    // }
}