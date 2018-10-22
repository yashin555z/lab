//
//  main.cpp
//  5прата
//
//  Created by Евгений on 19.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>

using namespace std;
int main()

{
    double a, b;
    setlocale(0, "rus");
    cout<<"укажите температуру в градусах цельсия=";
    cin >>a;
    b=a*1.8+32;
    
    cout<<a<<" "<< "градусов в цельсия равны"<<b<< " "<<"градусам по фарингейту"<<endl;
    
    
    
    
    return 0;
}
