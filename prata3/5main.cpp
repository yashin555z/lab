//
//  main.cpp
//  5pr3
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    
    setlocale(0, "rus");
    double z, u;
    double p;
   
    cout << "введите население земли: ";
    cin >> z;
    cout << "введите население украины: ";
    cin >> u;
    p = (u / z)*100;
    cout << p <<"%"<< " отношение населения украины к насеению земли ";
    
    return 0;
}

