package com.company;

public class Analitic extends Worker {
   @Override
    public void prof() {
        System.out.print("Аналитик ");
    }

    @Override
    public void zp() {

        System.out.println("Зарплата: " +dox * 0.25 );
    }
}
