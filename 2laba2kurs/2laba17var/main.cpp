//
//  main.cpp
//  2laba17var
//
//  Created by Евгений on 10/10/2019.
//  Copyright © 2019 Евгений. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Zvonok{
public:
    int nomer,god,mes,den,chas,minuta,
    dataa,time,dv,dlina;
    string name1,name2;
    Zvonok(int nomer, string name1, string name2, int den, int mes, int god,
           int chas, int minuta, int dlina){
        this->nomer=nomer;
        this->god=god;
        this->mes=mes;
        this->den=den;
        this->chas=chas;
        this->minuta=minuta;
        this->name1=name1;
        this->name2=name2;
        dataa=den+(mes*30)+(god*365);
        time=chas*60+minuta;
        dv=dataa*1440+time;
    }
    void vivod(){
        cout<<" | "<<nomer<<" | "<<name1<<" | "<<name2<<" | "<<den<<"."<<mes<<"."<<god<<" | "
        <<chas<<":"<<minuta<<" | "<<dlina<<" | "<<endl;
        
    }
};

void polnviv(vector<Zvonok>&dd){
    for(int i=0;i<dd.size();i++){ //возвращение размера массива
        dd[i].vivod(); //вывыод элементов массива
    }
}
void pluso(vector<Zvonok>&dd){
    int nomer, den, mes, god, chas,  minuta,  dlina;
    string name1, name2;
    cin>>nomer>>name1>>name2>>den>>mes>>god>>chas>>minuta>>dlina;
    dd.push_back(Zvonok(nomer,name1,name2,den,mes,god,chas,minuta,dlina)); //добавление в конец массива объекта
}
void udalit(vector<Zvonok>&dd,int u){
    dd.erase(dd.begin()+u-1); //удаление элемента от начала на позицию u-1
    
}
void vivodsdatipodatu(vector<Zvonok>&dd){
    int den,mes,god,mind,maxd;
    cin>>den>>mes>>god;
    mind=den+mes*30+god*365;
    cin>>den>>mes>>god;
    maxd=den+mes*30+god*365;
    for(int i=0;i<dd.size();i++){
        if(dd[i].dataa>mind&&dd[i].dataa<maxd){
            dd[i].vivod();
        }
    }
}
void sortdat(vector<Zvonok>&dd){
    sort(dd.begin(),dd.end(),[](const Zvonok &a, const Zvonok &b){
        return a.dv<b.dv;
    }); //сортировка с начала по конец
}
void sortdlit(vector<Zvonok>&dd){
    sort(dd.begin(),dd.end(),[](const Zvonok &a, const Zvonok &b){
           return a.dlina<b.dlina;
       });

}
void poiskname(vector<Zvonok>&dd, string name){
    cout<<"звонки от абонента: \n";
    for(int i=0;i<dd.size();i++){
        if(dd[i].name1==name){
            dd[i].vivod();
        }
    }
    cout<<"звонки к абоненту: \n";
    for(int i=0;i<dd.size();i++){
        if(dd[i].name2==name){
            dd[i].vivod();
        }
    }
}
int main() {
        
    
    vector<Zvonok>zvonki;
    int nomer, den, mes, god, chas,  minuta,  dlina;
    string name1, name2;
    
    try{
        int i;
        ifstream input("INPUT.TXT");
        while(!input.eof()){ //пока не конец файла
            input>>nomer>>name1>>name2>>den>>mes>>god>>chas>>minuta>>dlina;
            zvonki.push_back(Zvonok(nomer,name1,name2,den,mes,god,chas,minuta,dlina));
        }
        
    
        
    }catch(exception e){ //вывод ошибки
        
        cout<<e.what();
    }
    
    polnviv(zvonki);     //отправка адреса в функцию
    pluso(zvonki);
    int q;
    cout<<"введите удаление";
    cin>>q;
    udalit(zvonki,q);
    vivodsdatipodatu(zvonki);
    sortdat(zvonki);
    sortdlit(zvonki);
    return 0;
}

