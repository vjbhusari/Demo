#include<stdio.h>
int main()
{
    int n=153, sum=0;
    int temp,r;
    temp=n;
    while(1){
    if(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        continue;
    }
    else{
        break;
    }
    }
    if(temp==sum){
        printf("Am");
    }
    else{
        printf("not Am");
    }
}