//
//  main.cpp
//  prata54
//
//  Created by Евгений on 28/10/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
struct candyBar
{
    string name;
    double weight;
    int kcal;
};

    int main()
{
    candyBar snack
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "The name of these chocolates: " << snack.name << endl;
    cout << endl;
    cout << "The weight of these chocolates: " << snack.weight << endl;
    cout << endl;
    cout << "The kcal of these chocolates: " << snack.kcal << endl;
    cout << endl;
    
    return 0;
}
