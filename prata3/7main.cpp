//
//  main.cpp
//  77
//
//  Created by Евгений on 21.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>
using namespace std;
int main(){
    double km, r;
    cout<< "введите расход: ";
    cin >>r;
    km=(1/(r*0.22/0.6214))*100;
    cout << "расход в милях на галлон = "<< km;
    
    
    
    
    return 0;
}
