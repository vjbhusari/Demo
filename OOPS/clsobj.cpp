#include<iostream>
using namespace std;
class hero
{
    
    // DATA MEMBERS , PROPERTIES
    int health;   
    public:              
    char level;

};

int main()
{

    // CREATION OF OBJECT
    hero ramesh;
    cout<<"health is"<<ramesh.health<<endl;
    cout<<"level is"<<ramesh.level<<endl;

    return 0;
}
