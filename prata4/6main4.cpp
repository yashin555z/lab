//
//  main.cpp
//  6prata4
//
//  Created by Евгений on 28/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
struct CandyBar
{
    char Name [20];
    double netto;
    int Ccal;
};
int main ()
{
    using namespace std;
    CandyBar snack[3]={
        {"Mocha Much",2.3,350},
        {"sfdsfsdf",2.45,435},
        {"bnderlogi", 2.12 , 777}};
    
    cout<<"Struct  "<<snack[2].Name<<" "<<snack[2].netto<<" "<<snack[0].Ccal<<endl;
    cin.get();
    return 0;
    }
