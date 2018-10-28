//
//  main.cpp
//  4prata4
//
//  Created by Евгений on 28/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your first name: ";
    string firstName;
    getline (cin, firstName);
    cout << endl;
    cout << "Enter your last name: ";
    string lastName;
    getline (cin, lastName);
    cout << endl;
    cout << "Here's the information in a single string: " << lastName << ", " << firstName;
    cout << endl;
    return 0;
}
