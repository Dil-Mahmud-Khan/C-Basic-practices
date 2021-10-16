#include<iostream>
using namespace std;
class directory{
protected:
    string personname;
    string dateofbirth;
public:
    void setpersoninfo(string pn,string db){personname=pn;dateofbirth=db;}
    virtual void displayinfo(){
        cout<<"name"<<personname<<endl;
        cout<<"date of birth"<<dateofbirth<<endl;
    }
};
class Nationaldirectory:public directory{
    protected:
    int personage;
    string personcity;
public:
    void setpersonage(int age){personage=age;}
    void setpersoncity(string city){personcity=city;}
    void displayinfo(){
    cout<<"age"<<personage<<endl;
        cout<<"city"<<personcity<<endl;
    }
};
class localdirectory:public directory{
protected:
    string personaddress;
    string persontelno;
    string personlocalarea;
    double zipcode;
public:
    void setpersonaddress(string address){address=personaddress;}
    void setpersontelno(string telno){telno=persontelno;}
    void setpesonlocalarea(string larea){larea=personlocalarea;}
    void setpersonzipcode(double zc){zc=zipcode;}
    void displayinfo(){
        cout<<"address"<<personaddress<<endl;
        cout<<"phone number"<<persontelno<<endl;
        cout<<"local area"<<personlocalarea<<endl;
        cout<<"post code"<<zipcode<<endl;
    }
};

class profession:public directory{
protected:
    string personprofession;
    string personinstitution;
    string persongrade;
    double personsalary;
public:
    void setpersonprofession(string prof){prof=personprofession;}
    void setpersoninstitution(string inst){inst=personinstitution;}
    void setpersongrade(string  pgrade){pgrade=persongrade;}
    void setpersonsalry(double s){s=personsalary;}
    
    void displayinfo(){
        cout<<"profession"<<personprofession<<endl;
        cout<<"organiazaton"<<personinstitution<<endl;
        cout<<"pay grade"<<persongrade<<endl;
        cout<<"salary"<<personsalary<<endl;
    }
};

int main()
{

}
 
