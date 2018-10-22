//
//  main.cpp
//  2прата3
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    int a, b, u;
    float bmi;
    float s, c;
    cout <<"введите свой рост в футх и дюймах:";
    cin >> a >> u;
    cout<<" введите свой вес в фунтах :";
    cin >> b;
    
    s = 0.254*(u + a * 12);
    c = b / 2.2;
    bmi = c / s *s;
    
    cout <<"bmi="<< bmi;
    return 0;
}
