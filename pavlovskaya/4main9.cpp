//
//  main.cpp
//  788
//
//  Created by Евгений on 07/12/2018.
//  Copyright © 2018 Евгений. All rights reserved.


#include <iostream>
#include <vector>
#include <algorithm>
#include<iterator>
using namespace std;

struct poi {
    int x;
    int y;
    
    poi(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    
    poi& operator = (const poi& k) {
        x = k.x;
        y = k.y;
        return *this;
    }
    bool operator < (const poi& k) {
        
        if (x < k.x)
            return true;
        
        if (x == k.x && y < k.y)
            return true;
        
        return false;
    }
};

struct r {
    
    poi points[3];
};

int main(int argc, char *argv[]) {
    
    int m;
    
    cout << "Введите количество треугольников" << endl;
    cin >> m;
    
    vector<poi> points;
    m=m*3;

    int i = 0;
    for (; i < m; i++) {
        
        poi k;
        
        cout << "введите координаты [" << i << "] x:" << endl;
        cin >> k.x;
        
        cout << "введите координаты [" << i << "] y:" << endl;
        cin >> k.y;
        
        points.push_back(k);
    }
    sort(points.begin(), points.end());
    vector<r> tr;

    for (i=0; i<m; i++) {
        
        r t;
        t.points[0] = points[i++];
        t.points[1] = points[i++];
        t.points[2] = points[i];
        tr.push_back(t);
    }
    cout << "Получившиеся треугольники: " << endl;
    
    vector<r>::iterator iter;
    
    for (iter = tr.begin(); iter!=tr.end(); ++iter)
        cout << "(" <<
        "(" << iter->points[0].x << ", " << iter->points[0].y << "), "
        "(" << iter->points[1].x << ", " << iter->points[1].y << "), "
        "(" << iter->points[2].x << ", " << iter->points[2].y << "))" << endl;
 
    return 0;
}

