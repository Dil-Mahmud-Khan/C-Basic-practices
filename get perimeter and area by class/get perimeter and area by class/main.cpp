#include<iostream>
#include<math.h>
using namespace std;
class triangle{
private:
    
    float slide1=0;
    float slide2=0;
    float slide3=0;
public:
    void setslide1(float v){if(v>=0){slide1=v;}
        cout<<"invalid value"<<endl;}
    float getslide1(){return slide1;}
    void setslide2(float v){slide2=v;}
    float getslide2(){return slide2;}
    void setslide3(float v){slide3 =v;}
    float getslide3(){return slide3;}
    void setslide123(float v1,float v2,float v3){
        slide1=v1;
        slide2=v2;
        slide3=v3;
    }
    float getperimeters(){return slide1+slide2+slide3;}
    float getarea(){ float p= getperimeters()/2; return sqrt(p*(p-slide1)*(p-slide2)*(p-slide3)); }
    
    
};
 
int main(){
    triangle t1;
    t1.setslide123(4,5,7);
    cout<<t1.getslide1()<<endl;
    cout<<t1.getslide2()<<endl;
    cout<<t1.getslide3()<<endl;
    cout<<t1.getperimeters()<<endl;
    cout<<t1.getarea()<<endl;
    
    return 0;
}
