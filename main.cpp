//
//  main.cpp
//  rererere
//
//  Created by Евгений on 22/05/2019.
//  Copyright © 2019 Евгений. All rights reserved.
//

#include <iostream>
using namespace std;


  int hi = 2500;
class Weapon
{


public:
    virtual void Shoot() = 0;
 
};

class Gun : public Weapon
{
public:
    void Shoot() override
    {
        cout << "вы нанесли урон из пистолета 100" <<endl;
        hi=hi-100;
        cout<<"жизни крепости: " << hi<<endl;
    }
};

class SubmachineGun :public Gun
{
public:
    void Shoot() override
    {
        cout << "вы нанесли урон из пулемета - 500" << endl;
        hi=hi-500;
        cout<<"жизни крепости: " << hi<<endl;
    }
};

class Bazooka :public Weapon
{
public:
    void Shoot() override
    {
        cout << "вы нанесли урон крепости из баузки - 800" << endl;
        hi=hi-800;
        cout<<"жизни крепости: " << hi<<endl;
    }
};

class Knife :public Weapon
{
public:
    void Shoot() override
    {
        cout << "вы нанесли урон крепости, порезав ее ножем - 5" << endl;
        hi=hi-5;
        cout<<"жизни крепости: " << hi<<endl;
    }
    
};

class Player
{
public:
    void Shoot(Weapon *weapon)
    {
        weapon->Shoot();
    }
};

int main()
{

    setlocale(LC_ALL, "ru");
    cout<<"Ваша задача разрушить крепость со здоровьем "<<hi<<" за 5 ходов. Для вас приготовлен целый арсенал оружия, чем будете атаковать?"<<endl;
    cout<<"1 - выстрел из пистолета "<<endl;
    cout<<"1 - выстрел из пулемета "<<endl;
    cout<<"3 - выстрел из базуки "<<endl;
    cout<<"4 - удар ножом "<<endl;
   
    int pop;
    int hod=0;
    while((hod!=5)&&(hi>0)){
     
        cout<<"введите команду: ";
    cin>>pop;
    
    
   // Bazooka bazooka;
    
   
    if(pop==1){
        Gun Gun;
    Player player;
    player.Shoot(&Gun);
        hod++;
    }
        else 
        if (pop==2){
            SubmachineGun SubmachineGun;
            Player player;
            player.Shoot(&SubmachineGun);
            hod++;
        }
        else
            if(pop==3){
                Bazooka Bazooka;
                Player player;
                player.Shoot(&Bazooka);
                hod++;
            }
        else
            if(pop==4){
        Knife Knife;
        Player player;
        player.Shoot(&Knife);
        hod++;
            }
        
    }
    if(hi>0){
        cout<<"Вы не смогли разрушить башню за 5 ходов"<<endl;
    }
    else {
        cout<<"Вы справились с задачей "<<endl;
    }
    return 0;
}
