//
//  main.cpp
//  nested if
//
//  Created by Dil on 23/5/20.
//  Copyright © 2020 Dil. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
    int mark;
    cout<<"enter the mark"<<endl;
    cin>>mark;
    
    if(mark>32){
        if(mark>=80){
            cout<<"A+";}
        else if(mark>=70){
                 cout<<"A";}
              else  if(mark>=60){
                  cout<<"A-";}
                   else if(mark>=50){
                       cout<<"B";}
                        else if(mark>=40){
                            cout<<"C";}
                          else   if(mark>=33){
                              cout<<"D";}
                                    
    }
                                
else{
    cout<<"Fail";
    
}
    return 0;
    }

