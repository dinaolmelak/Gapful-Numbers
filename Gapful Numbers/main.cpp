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
//                      formed by the first and last difit of the original number
#include <iostream>
#include <sstream>
using namespace std;



int main()
{
    // Algorithm to Solve this problem
    /*
     -[x] first we get a number from a user
     -[x] then we change the number to a string
     -[x] then we store the first char with the last char of the string
     -[x] change the char to a string and divide the original number with this string
        - if it has no remainder, then return true
        - else return false
     */
    int originalNum;
    string twoDigitString;
    int twoDigitInt;
    bool isGapful;
    stringstream changeToIntObj;
    stringstream changeToStringObj;
    string originalNumString;
    cout<<"Please enter a suspicious Gapful Number:"<<endl;
    cin>>originalNum;
    changeToIntObj<<originalNum;
    changeToIntObj>>originalNumString;
    
    twoDigitString=originalNumString[0];
    twoDigitString=twoDigitString+originalNumString[originalNumString.length()-1];
    
    changeToStringObj<<twoDigitString;
    changeToStringObj>>twoDigitInt;
    if(originalNum%twoDigitInt==0){
        isGapful=1;
    }
    else{
        isGapful=0;
    }
    
    cout<<"This is the OriginalNum: "<<originalNum<<endl;
    cout<<"This is the twoDigitString: "<<twoDigitString<<endl;
    cout<<"This is the originalNumString: "<<originalNumString<<endl;
    cout<<"This is the twoDigitInt: "<<twoDigitInt<<endl;
    cout<<"This is the is it Gapful bool: "<<isGapful<<endl;
    return 0;
}
