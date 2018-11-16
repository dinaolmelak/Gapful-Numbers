//
//  main.cpp
//  Gapful Numbers
//
//  Created by Dinaol Melak on 11/16/18.
//  Copyright © 2018 Dinaol Melak. All rights reserved.
//
//  This is a Solo Learn Challenge of a program
//  The program is to identify whether or not a number is a Gapful Number
//      Gapful Number:- is a number of at least 3 digits that is divisible by the number
//                      formed by the first and last digit of the original number
#include <iostream>
#include <sstream>
using namespace std;

bool checkGapfullness(int originalNum){
    string twoDigitString;
    int twoDigitInt;
    stringstream changeToIntObj;
    stringstream changeToStringObj;
    string originalNumString;
    
    changeToIntObj<<originalNum;
    changeToIntObj>>originalNumString;
    
    twoDigitString=originalNumString[0];
    twoDigitString=twoDigitString+originalNumString[originalNumString.length()-1];
    
    changeToStringObj<<twoDigitString;
    changeToStringObj>>twoDigitInt;
    if(originalNum%twoDigitInt==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int inputNum;
    cout<<"Please enter a suspicious Gapful Number: ";
    cin>>inputNum;
    cout<<endl;
    if(checkGapfullness(inputNum)){
        cout<<"This is a Gapful Number"<<endl;
    }else{
        cout<<"Sorry, This is not Gapful Number"<<endl;
    }
    
    cout<<endl;
    
    return 0;
}
