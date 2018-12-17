//
//  main.cpp
//  2laba
//
//  Created by Евгений on 15.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    int n;
    int m=0;
    int t=0;
    int r=0;
    int counter = 0;
    int s=1;
    int y=0;
    
    cout << "введите количество элементов массива n=";
    cin >> n;
    int array[n];
    
    cout << "введите элементы массива поочередно\n";
    
    for ( int counter = 0; counter < n; counter++ )
        cin >> array[counter];
    
    
    for(int counter = 0; counter<n-1; counter++)
        if ((array[counter+1]>array[counter])){
            m = counter+1;
            
        }
    
    
    
    
    
    cout << "максимальный элемент массива=" << m << endl;
    
    for(counter; counter<n; counter++){
        if (array[counter]==0){
            
            t=counter;
            break;
        }
        
    }
    
    for (int d = t+1; d < n; d++)
        if (array[d] == 0){
            r = d;
            
            break;
        }
    y=t+3;
    
    
    
    for (int i=t+1; i<r; i++){
        s=s*array[i];
    }
    
    
    cout<<"произведение между нулевыми элементами массива равно: "<<s<<endl;
    
    return 0;
}
