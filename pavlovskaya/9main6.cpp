//
//  main.cpp
//  888
//
//  Created by Евгений on 03/12/2018.
//  Copyright © 2018 Евгений. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;


struct scan_info
{
    char model[25];
    
    int price;
    double x_size;
    double y_size;
    
    int optr;
    int gray;
};

int save_info(const char* file,const scan_info* info,unsigned long count)
{
    unsigned long real_count =0;
    for (unsigned int k=0; k < count ;++k)
        if (info[k].price >= 200 && isalpha(info[k].model[0])) real_count++;
    if (real_count == 0)
        return -1;
    
    ofstream o_file(file,ios::binary);
    if (o_file.fail())
        return -1;
    o_file.write((char*)&real_count,sizeof(long));
    
    char chrs[2][2] = {'A','Z','a','z'};
    
    for (int j=0; j <2; ++j)
    {
        for (unsigned long i=0; i<count; ++i)
        {
            if (info[i].model[0] >= chrs[j][0] && info[i].model[0] <= chrs[j][1]
                && info[i].price >= 200)
            {
                o_file.write((char*)&info[i],sizeof(scan_info));
                if (o_file.fail())
                {
                    o_file.close();
                    return -1;
                }
            }
        }
    }
    
    o_file.close();
    return 0;
}
unsigned long load_info(const char* file,scan_info*& info)
{
    ifstream i_file(file,ios::binary);
    if (i_file.fail())
        return 0;
    
    unsigned long count = 0;
    i_file.read((char*)&count,sizeof(long));
    
    try {
        info = new scan_info[count];
    } catch (std::bad_alloc)
    {
        i_file.close();
        return 0;
    }
    
    for (unsigned long i=0; i < count; ++i)
    {
        i_file.read((char*)&info[i],sizeof(scan_info));
        if (i_file.eof() && i <count-1)
        {
            i_file.close();
            delete [] info;
            
            return 0;
        }
    }
    
    i_file.close();
    return count;
}
template <class T> inline void
input_var(const char* desc,T& dst)
{
    do
    {
        cout << desc;
        cin.sync(); cin.clear();
        
    } while ((cin >> dst).fail() || cin.get() != 10);
}
unsigned long input(scan_info*& info_arr)
{
    unsigned long count = 0;
    
    cout << endl;
    input_var("Count of records:",count);
    try {
        info_arr = new scan_info[count];
    } catch (std::bad_alloc)
    {
        return 0;
    }
    
    for (unsigned long i=0; i < count; ++i)
    {
        cout << endl << "Record number "<< i+1 << endl;
        
        cout << "Model:"; cin.get(info_arr[i].model[24]);
        input_var("Price:", info_arr[i].price);
        input_var("X-size:", info_arr[i].x_size);
        input_var("Y-size:", info_arr[i].y_size);
        input_var("Optical resolution:",info_arr[i].optr);
        input_var("Shade of gray:", info_arr[i].gray);
    }
    
    return count;
}
void print_one(const scan_info* info,unsigned long n)
{
    cout <<endl << "Number:" << n + 1 << endl;
    cout << "----------------------------" << endl;
    
    cout << "Model:";
    cout << info[n].model << endl;
    
    cout << "Price:";
    cout << info[n].price<< endl;
    
    cout << "X-size:";
    cout << info[n].x_size<< endl;
    
    cout << "Y-size:";
    cout << info[n].y_size<< endl;
    
    cout << "Optical resolution:";
    cout << info[n].optr<< endl;
    
    cout << "Gray scale:";
    cout << info[n].gray<< endl;
    
    
}
void print_all(const scan_info* records,unsigned long count)
{
    for (unsigned long i=0; i < count ;++i)
        print_one(records,i);
}

int main()
{
    scan_info* records = 0; char file[25]; unsigned long count = 0;
    cin.tie(&cout);
    
    
    while (count == 0)
    {
        cout << "1.Input records" << endl
        << "2.Load from file" << endl
        << "3.Exit" << endl;
        
        cin.clear();
        char chw = cin.get(); cin.get();
        
        switch (chw)
        {
            case '1':
                count = input(records);
                if (count == 0)
                    cout << "Error, too many records" << endl << endl;
                break;
            case '2':
                input_var("File:",file);
                count = load_info(file,records);
                if (count == 0)
                    cout << "Error reading file" << endl <<endl;
                break;
            case '3':
                exit(0);
            default:
                cout << "Incorrect input" << endl << endl;
                break;
        }
    }
    
    unsigned long rec_number = -1;
    while (true)
    {
        cout << endl << endl
        << "1.record" << endl
        << "2.all" << endl
        << "3.Save to file" << endl
        << "4.Exit" << endl;
        
        cin.clear();
        char chw = cin.get(); cin.get();
        switch (chw)
        {
            case '1':
                input_var("Record number:",rec_number);
                if (--rec_number < count)
                    print_one(records,rec_number);
                else
                    cout << "Out of range" << endl;
                break;
                
            case '2':
                print_all(records,count);
                break;
            case '3':
                input_var("File:",file);
                if (save_info(file,records,count))
                    cout << "Error writing file" << endl <<endl;
                
                break;
            case '4':
                exit(0);
            default:
                cout << "Incorrect input" << endl;
                break;
        }
    }
}
