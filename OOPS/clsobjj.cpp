#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;

    public:
    void aa(string s){
        name=s;
    };

    string bb(){
        return name;
    }

    void cc(int n){
        roll=n;
    }
    
    int dd(){
        return roll;
    }


};

int main(){

    student s1;
    s1.aa("Ajay");
    // cout<<s1.bb()<<" "<<;
    s1.cc(9);
    cout<<s1.dd()<<" "<<s1.bb();


}