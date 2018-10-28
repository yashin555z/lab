//
//  main.cpp
//  9var4
//
//  Created by Евгений on 25/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"rus");
    const int ArSize = 20;
    char Fname[ArSize];
    char Lname[ArSize];
    int age;
    char bit;
    
    cout << "Введите ваше имя " << endl;
    cin.getline(Fname, ArSize);
    cout << "Введите вашу фамилию  " << endl;
    cin.getline(Lname, ArSize);
    cout << "какую оценку вы хотите 5,4,3" << endl;
    cin >> bit;
    cout << "ваш возраст " << endl;
    cin >> age;
    cin.get();
    cout << "Имя: " << Lname << " " << Fname << endl;
    cout << "Возраст: " << age << endl;
    switch (bit)
    {
        case '5':
            cout << "оценка: 4" << endl;
            break;
        case '4':
            cout << "оценка: 3" << endl;
            break;
        case '3':
            cout << "оценка: 2" << endl;
            break;
        default: cout << "не работает" << endl;
    }
   
    return 0;
}
