//
//  main.cpp
//  labala
//
//  Created by Евгений on 15/10/2019.
//  Copyright © 2019 Евгений. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;


class bibl
{
public:
    int udk,god,kol;
    string fname, n;

    void SetBook(int udkzn, string fnamezn, string nzn, int godzn, int kolzn)
    {
        fname = fnamezn;
        god = godzn;
        kol = kolzn;
        n = nzn;
        udk = udkzn;
    }
    void Write()
    {
        cout <<"Номер: "<< udk<<"; Название: "<<n<<", Автор: "<<fname<< ", Год издания: "<<god<<", осталось книг: "<<kol<<endl;
    }
}
;




struct Node {
    bibl Book;
    Node *Next;
};


class spis
{
public:
    Node *head, *kon;
    int size;
    spis() :head(NULL), kon(NULL), size(0) {
        
    };
    void Show()
    {
        Node *erhead = head;
        int er = size;
        while (er!=0)
        {
           erhead->Book.Write();
            erhead= erhead->Next;
            er=er-1;
        }
    }
    void Add(bibl b)
    {
        size++;
        Node  * er = new Node;
        er->Next = head;
        er->Book = b;
        if (head != NULL)
        {
            kon->Next = er;
            kon= er;
        }
        else
            head = kon = er;
    }
};

int main()
{
     
    
    int komand, prov, number = 0;
    
    spis kn;
    bibl udk1,udk2,udk3,udk4,udk5,udk6,udk7,udk8,udk9,udk10;
    udk1.SetBook(1, "Ильф И. и Петров Е.", "Двенадцать Стульев", 1958, 4);
    udk2.SetBook(2, "Ильф И. и Петров Е.", "Золотой теленок", 1958, 2);
    udk3.SetBook(3, "Набоков В.", "Лолита", 2017, 7);
    udk4.SetBook(4, "Тетерин П.", "Новый Альбом", 2013, 1);
    udk5.SetBook(5, "Есенин С.А.", "Сборник стихов", 1991, 3);
    udk6.SetBook(6, "Хемингуэй Э.", "Райский сад, Опасное лето", 1988, 7);
    udk7.SetBook(7, "Гоголь Н.В.", "Повести", 1979, 9);
    udk8.SetBook(8, "Пушкин А.С.", "Сказка о золотой рыбке", 1972, 11);
    udk9.SetBook(9, "Достоевский Ф.М.", "Преступление и наказание", 2003, 8);
    udk10.SetBook(10, "Булгаков М.А.", "Мастер и маргарита", 1978, 6);
    
    kn.Add(udk1); kn.Add(udk2); kn.Add(udk3); kn.Add(udk4); kn.Add(udk5); kn.Add(udk6); kn.Add(udk7); kn.Add(udk7); kn.Add(udk8); kn.Add(udk9); kn.Add(udk10);
    
    cout << "Информация о книгах в библиотеке: "<<endl;
    while (1)
    {
        komand = 0;
        cout << "Задайте команду для получения информации"<<endl;
        cout << "1: Информация о наличии книг"<<endl;
        cout << "2: Взять книгу из библиотеки "<<endl;
        cout << "3: Возврат книгу в Библиотеку "<<endl;;
        cout << "4: Проверить наличие книги по номеру УДК"<<endl;
        cout << "5: Звершение работы"<<endl;
        cout<<endl<<endl;
        cin >> komand;
        switch (komand)
        {
        case 1:
        {
            cout << endl;
            kn.Show();
            cout <<endl;
            system("pause");
            break;
        }
        case 2:
        {
            cout << "Введите номер книги: "<<endl;
            cin >> number;
            prov= 0;
            Node *erhead = kn.head;
            int er = kn.size;
            while (er!= 0)
            {
                if (erhead->Book.udk == number)
                {
                    prov = 1;
                    if (erhead->Book.kol != 0)
                        erhead-> Book.kol--;
                    else
                    {
                        cout << "Такой книги нет в библиотеке"<<endl;
                        break;
                    }
                   
                    cout << "Вы взяли книгу, Количество изменилось:"<<endl;
                    erhead-> Book.Write();
                    break;
                }
                erhead = erhead->Next;
                er=er-1;
            }
            if (prov == 0)
                
                cout << "Такой книги нет в библиотеке"<<endl;
            break;
        }
        case 3:
        {
            cout << "Введите номер книги:"<<endl;
            cin >> number;
            prov = 0;
           
            Node *erhead = kn.head;
            int er = kn.size;
            while (er!= 0)
            {
                if (erhead->Book.udk == number)
                {
                    prov = 1;
                    erhead->Book.kol++;
                    cout << "Книга возвращена. Количество изменилось: ";
                    erhead->Book.Write();
                    break;
                }
                erhead = erhead->Next;
                er=er-1;
            }
            if (prov == 0)
                
                cout << "Такой книги нет в библиотеке"<<endl;
            break;
            }
            case 4:
            {
            cout << "Введите номер УДК:"<<endl;
            cin >> number;
            prov = 0;
            
            Node *erhead = kn.head;
            int er = kn.size;
            while (er!= 0)
            {
                if (erhead->Book.udk == number)
                {
                    prov = 1;
                    
                    cout << "Книга с таким номером есть в библиотеке"<<endl;
                    erhead->Book.Write();
                    break;
                }
                erhead = erhead->Next;
                er=er-1;;
            }
            if (prov == 0)
                
                cout << "Такой книги нет в библиотеке"<<endl;
            break;
        }
        case 5:
            return 0;
        default:
        {
            cout << "Вы ввели несуществующее значение"<<endl;
            break;
        }
        }
    }
}
