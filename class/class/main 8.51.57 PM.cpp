#include<iostream>
using namespace std;
class student
{
public:
    
    int id;
    float cgpa;
    
};
int main()
{
    student dil;
    dil.id=42199l;
    dil.cgpa=2.25;
    cout<<"ID="<<dil.id<<endl;
    cout<<"cgpa="<<dil.cgpa<<endl;
    return 0;
}
