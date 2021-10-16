//
//  main.cpp
//  vowel consonant
//
//  Created by Dil on 24/5/20.
//  Copyright © 2020 Dil. All rights reserved.
//

#include <iostream>
using namespace std;
 int main ()
{
    int mark;
    cout<<"Enter the letter"<<endl;
    cin>>mark ;
    if(mark=='a'|| mark =='e' || mark=='i'|| mark=='o' || mark=='u'){
        cout<<"this is vowel"<<endl;
    }
        else{
            cout<<"this is consonant"<<endl;
        }
    
return 0;
}
