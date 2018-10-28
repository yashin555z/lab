//
//  main.cpp
//  laba2
//
//  Created by Евгений on 25/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter your name:\n";
    string yourName;
    getline (cin, yourName);
    
    cout << "Enter your favorite dessert:\n";
    string yourDessert;
    getline (cin, yourDessert);
    
    cout << "I have some delicious " << yourDessert;
    cout << " for you, " << yourName << ".\n";
    // cin.get();
    return 0;
}
