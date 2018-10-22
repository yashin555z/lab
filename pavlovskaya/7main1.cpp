//
//  main.cpp
//  6
//
//  Created by Евгений on 14.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//





#include<iostream>
using namespace std;

int main ()

{
    setlocale(0, "rus");
    float x, a, b, f, c, dk, xx;
    
    cout << "ввести начальное значение x=";
    cin >> x;
    cout << "введите конечное знаечение x=";
    cin >> xx;
    cout << "введите а=";
    cin >> a;
    cout << "введите b=";
    cin >> b;
    cout << "введите c=";
    cin >> c;
    cout << "введите шаг dx=";
    cin >> dk;
    
    while (x<xx)
    {
    
    
    if (x < 5 && (c>0||c<0)){
        f = (-a*x*x - b);
    }
    else{
        if (c > 0 && a == 0){
            f = (a - x)/(c*x);
            }
        else{
            f = x/c;
        }
    }
    cout << f << endl;
        
        (x = x + dk);
    }
    
   
    
        
    
    return 0;
   
    
    
    

}
