//
//  main.cpp
//  7prata4
//
//  Created by Евгений on 28/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
struct Pizza
{
    char Name [20];
    double netto;
    int Ccal;
};
int main ()
{   using namespace std;
    Pizza Peper;
    cout<<"Enter Name:"<<endl;
    cin.getline (Peper.Name,20);
    cout<<"Enter diametr:"<<endl;
    cin>>Peper.netto;
    cout<<"Enter ves:"<<endl;
    cin>>Peper.Ccal;
    cout<<"Pizza: "<<Peper.Name<<endl<<"Diametr: "<<Peper.netto<<endl<<"Ves: "<<Peper.Ccal<<endl;
    cin.get();
    cin.get();
    return 0;
    }
