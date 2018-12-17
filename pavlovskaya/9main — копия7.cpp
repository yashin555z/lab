//
//  main.cpp
//  768594
//
//  Created by Евгений on 17/12/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <iostream>
#include <cstdio>



    using namespace std;
    
    int main(int argc, const char * argv[]) {
        int i, a(1),y(0);
        string ex;
        char line[1000];
        FILE *text;
        text = fopen("/Users/Evgenij/Documents/text.dat","r");
        fgets(line, 1000, text);
        cout << line << endl;
        for (i=0; i<=1000; i++){
           
                if (line[i] != '.' && line[i] !='?' && line[i] !='!'){
                    
                    if(line[i] == ',' || line[i] =='"' || line[i] =='-'|| line[i] =='(' || line[i] ==')'|| line[i] =='/' || line[i] =='%'){
                        a++;
                       
                    }
                    
                }
            if (line[i] == '.' || line[i] =='?' || line[i] =='!'){
                 y++;
                cout<<"предложение № "<<y<<" содержит "<<a<< " cимволов, отличных от букв и пробела "<<endl;
                a=1;
            }
            
        }
        
    return 0;
}
