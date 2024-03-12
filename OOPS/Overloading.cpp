#include<iostream>
using namespace std;


 int add(int a,int b,float c){
    return a+b+c;
 }


int add(int a,float b,int c){
   int f= a+b+c;
   return f;
}

int add(int a, float b, char c){
   return 0; 
}

int main(){
    int a,b,c,d;
    a=5;
    b=6;
    c=2;
    d=7;
    float z=4.2,f=5.1;
    cout<<add(a,b,z)<<endl; //15.2//15//15.2
    cout<<add(b,f,c);       //13//13//13

}


