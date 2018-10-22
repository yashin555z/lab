//
//  main.cpp
//  1prata 3
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
using namespace std;
    int main()

    {
        setlocale(0, "rus");
        const int n=12;
        int a;
        float b;
        cout << "напишите свой рост в дюймах:";
        cin >> a;
        b = (a / n);
        cout << "ваш рост, переведенный в футы:"<<" "<< b <<" "<< "футов"<<" "<<"и"<<" "<<a % n<<" " <<"дюймов";         
        return 0;
    }

