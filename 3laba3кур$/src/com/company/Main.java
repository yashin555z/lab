package com.company;
import java.util.Scanner;

public class Main {


    public static void main(String[] args){



                System.out.print("введите доход фирмы: ");
                Scanner vvod = new Scanner(System.in);
                int dox = vvod.nextInt();


        Worker meneger = new Meneger();
        Worker analitic =new Analitic();
        Worker proger =new Proger();
        Worker tester = new Tester();
        Worker dis = new Dis();
        meneger.prof();
        meneger.zp();

        analitic.prof();
        analitic.zp();

        proger.prof();
        proger.zp();

        tester.prof();
        tester.zp();

        dis.prof();
        dis.zp();
    }
}