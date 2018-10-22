//
//  main.cpp
//  4зпрата 3
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>
using namespace std;

int main()
{
    
    setlocale(0, "rus");
    int long  m, s, u, h, d;
    cout << " введите секунды: ";
    cin >> s;
    d = s / 86400;
    h = (s - d * 86400) / 3600;
    m = (s - h *3600 - d * 86400)/60;
    u = ((s - h * 3600 - d * 86400 - m*60)) ;
    cout << s << " cекунд: "<< d<<" дней "<< h << " часов " << m<<" минут "<< u << " секунд ";
    return 0;
}
