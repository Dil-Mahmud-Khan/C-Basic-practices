#include<iostream>
using namespace std;
class person {
public:
    string  name;
    int age;
    void display1()
    {
        cout<<name<<"name"<<endl;
        cout<<age<<"age"<<endl;
        
    }
    
    
    
};

class student:public person
{
public:
    int id;
    
    void display2()
    {
        cout<<id<<"id"<<endl;
        display1();
        
    }

};

int main()
{
    student s1;
    s1.name="dil";
    s1.age=21;
    s1.id=20;
    s1.display2();
    return 0;
    
}
