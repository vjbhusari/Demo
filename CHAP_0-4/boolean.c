
#include<stdio.h>
#include<stdbool.h> 

int main()
{
    int n;
    bool isEven;

    printf("enter any number : ");
    scanf("%d",&n);

    if(n%2==0){
        isEven=true;
    }else{
        isEven=false;
    }

    if(isEven){
        printf("Even");
    }
    else{
        printf("Odd");
    }

}