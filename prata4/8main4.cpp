//
//  main.cpp
//  8prata4
//
//  Created by Евгений on 28/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
#include <string>
struct Pizza
{
    std :: string Name ;
    double netto;
    int Ccal;
};
int main ()
{   using namespace std;
    Pizza *pz =new Pizza;
    cout<<"Enter diametr:"<<endl;
    cin>>(*pz).netto;
    cout<<"Enter Name:"<<endl;
    cin>>(*pz).Name ;
    cout<<"Enter ves:"<<endl;
    cin>>(*pz).Ccal;
    cout<<"Pizza: "<<(*pz).Name<<endl;
    cout<<"Diametr: "<<(*pz).netto<<endl<<"Ves: "<<(*pz).Ccal<<endl;
    system ("pause");
    delete pz;
    return 0;
    }
