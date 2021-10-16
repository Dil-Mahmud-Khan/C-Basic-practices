#include<iostream>
using namespace std;

///abstract class
class Directory{

protected:
    string personName;
    string dateOfBirth;

public:
    void setPersonalInfo(string pn,string db){personName = pn;dateOfBirth = db;}
    virtual void displayInfo(){

    cout<<"Name = "<<personName<<endl;
    cout<<"DOB = "<<dateOfBirth<<endl;
    }
};

class NationalDirectory :public Directory{
protected:
    int personAge;
    string perCity;

public:
    void setPersonAge(int age){ personAge = age;}
    void setPersonCity(string city){ perCity = city;}

    
    void displayInfo(){
    cout<<"Age = "<<personAge<<endl;
    cout<<"City = "<<perCity<<endl;
    }

};

class LocalDirectory :public Directory{
protected:
    string personAddress;
    string personTelNo;
    string perLocalArea;
    double zipCode;

public:
    void setPersonAddress(string address){personAddress = address;}
    void setPersonTelNo(string telNo){personTelNo = telNo;}
    void setPersonLocalArea(string la){perLocalArea = la;}
    void setPersonZipCode(double zc){zipCode = zc;}

    void displayInfo(){

    cout<<"Address = "<<personAddress<<endl;
    cout<<"Phone number = "<<personTelNo<<endl;
    cout<<"Local-Area = "<<perLocalArea<<endl;
    cout<<"Zip-code = "<<zipCode<<endl;

    }

};
class Profession :public Directory{

protected :
    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;

public:

    void setPersonProfession(string prof){personProfession = prof;}
    void setPersonInstitution(string inst){personInstitution = inst;}
    void setPersonGrade(string pGrade){personGrade = pGrade;}
    void setPersonSalary(double s){personSalary = s;}

    
    void displayInfo(){
    cout<<"Profession = "<<personProfession<<endl;
    cout<<"Institution = "<<personInstitution<<endl;
    cout<<"Pay-grade = "<<personGrade<<endl;
    cout<<"Salary = "<<personSalary<<endl;}



};

int main(){
Directory *person;

Directory p;
person = &p;
person->setPersonalInfo("XYZ","22/12/1999");
person->displayInfo();

NationalDirectory nD;
nD.setPersonAge(20);nD.setPersonCity("Dhaka");
person = &nD;
person->displayInfo();

LocalDirectory lD;
lD.setPersonAddress("Kallayanpur");lD.setPersonTelNo("9833333");lD.setPersonLocalArea("Shahid-minar Road");
lD.setPersonZipCode(1207);
person = &lD;
person->displayInfo();

Profession prof;
prof.setPersonProfession("Programmer");prof.setPersonInstitution("AIUB");prof.setPersonGrade("1st Grade");
prof.setPersonSalary(50000);
person = &prof;
person->displayInfo();



return 0;

}
