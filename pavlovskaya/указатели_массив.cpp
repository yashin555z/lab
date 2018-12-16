//
//  main.cpp
//  689
//
//  Created by Евгений on 16/12/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//
#include <iostream>

using namespace std;

int main( )
{
    int m,n,counter,sum=0;
    cout << "Введите размер матрицы \n";
    cout << "строк - ";
    cin >> m ;
    cout << "столбцов - ";
    cin >> n;
    int **a = new int*[m];
    for (int i=0; i<m; i++)
    {
        a[i]= new int[n];
    }
    
    cout << "Заполните матрицу \n" ;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << " Элемент №[" << i << ";" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout<<"полученная матрица:"<<endl;
    counter=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
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
          
            
        }
        
     
    }
    for (int i=0; i<n; i++)
    
        for (int j=0; j<m; j++){
            cout << " Элемент №[" << i << ";" << j << "] = ";
            cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    
    return 0;
}
