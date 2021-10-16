#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
public:
    person(string name,int age)
    {
        cout<<"person constructor is called for"<<endl;
        this->name=name;
        this->age=age;
    }
    void showperson()
    {
        cout<<"name:"<<this->name<<endl;
        cout<<"age:"<<this->age<<endl;
    
    }
    };
class faculty:public person
{
protected:
    int salary;
public:
    faculty(string name,int age,int salary):person (name,age){
        this->salary=salary;
        cout<<"faculty constructor is called for "<<name<<endl;
    
    }
};
class student :public person
{
protected:
    float cgpa;
public:
    student(string name,int age,float cgpa):person(name,age)
    {
        this->cgpa=cgpa;
        cout<<"student constructor is called for"<<name<<endl;
        
    }
    void showstudent()
    {
        showperson();
        cout<<"cgpa:"<<cgpa<<endl;
    
    }
};

class TA :public faculty,public student
{
public:
    
    
};
