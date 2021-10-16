//
//  main.cpp
//  this is fake
//
//  Created by Dil on 26/5/20.
//  Copyright © 2020 Dil. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first mark=";
    cin>>a;
    cout<<"Enter the second mark=";
    cin>>b;
    cout<<"Enter the third mark=";
    cin>>c;
    
    
    if(a>b&a>c){
        cout<<"A is biggest"<<endl;
    }
    if(b>a&b>c){
        cout<<"B is biggest"<<endl;
    }
        if(c>a&c>b){
            cout<<"C is biggest"<<endl;
        }
        
            
    return 0;
}
