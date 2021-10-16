//
//  main.cpp
//  leap year
//
//  Created by Dil on 22/5/20.
//  Copyright © 2020 Dil. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year =";
    cin>>year;
    if((year%4==0 && year%400==0) ||year%100!=0){
        cout<<"This is leap year =";
    }
        else{
            cout<<"this is not a leap year =";
        }
            
        
    }

