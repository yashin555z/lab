//
//  main.cpp
//  9вариант3лаба
//
//  Created by Евгений on 22.10.2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale (0, "RUS");
    int sum=0, i, j, counter=0;
    int a[10][10];
    cout<<"Введите матрицу А: \n";
    for (i=0; i<10; i++)
        for (j=0; j<10; j++)
            cin>>a[i][j];
    for (i=0; i<10; i++)
        for (j=0; j<10; j++){
            if(i-1>=0&&j-1>=0){
                counter++;
                sum+=a[i-1][j-1];
            }
            if(i-1>=0){
                counter++;
                sum+=a[i-1][j];
            }
            if(i-1>=0&&j+1>=0&&j+1<3){
                counter++;
                sum+=a[i-1][j+1];
            }
            if(j+1<3){
                counter++;
                sum+=a[i][j+1];
            }
            if(i+1<3&&j+1<3){
                counter++;
                sum+=a[i+1][j+1];
            }
            if(i+1<3){
                counter++;
                sum+=a[i+1][j];
            }
            if(i-1>=0){
                counter++;
                sum+=a[i-1][j];
            }
            if(j-1>=0){
                counter++;
                sum+=a[i][j-1];
            }
        
            a[i][j]=sum/counter;
            sum=0;
            counter=0;
            
            cout<<"полученная матрица/n"<<a[i][j];
            
        }
       
    return 0;
}
