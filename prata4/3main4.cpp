//
//  main.cpp
//  3laba4
//
//  Created by Евгений on 25/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>
//#include <string>
int main ()
{
    using namespace std;
    const int ArSize = 20;
    char Fname[ArSize];
    char Lname[ArSize];
    cout<<"Enter your first name "<<endl;
    cin.getline(Fname,ArSize);
    cout<<"Enter your last name "<<endl;
    cin.getline(Lname,ArSize);
    cout<<"Name: "<<Lname<<",  "<<Fname<<endl;
    cin.get();
    return 0;
    }
