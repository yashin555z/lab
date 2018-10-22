//
//  main.cpp
//  32prata
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    float a, b, c;
    cout << "введите значение широты в градусах  = ";
    cin >> a;
    cout << " введите значение широты в минутах  = ";
    cin >> b;
    cout << "введите значение широты в секундах  = ";
    cin >> c;
    float h = (a + b / 60 + c / 3600);
    cout<< "градусы:"<< a;
    cout << "минуты:"<< b;
    cout << "секунды:"<< c;
    cout << a<<" "<<"градусов "<<b<<" минут "<<c<<" секунд = "<< h<<" градусов";
    return 0;
}

