package sample;

public class Zvonok {

    public int nomer, god, mes, den, chas, minuta, dataa, time, dv, dlina;
    public String name1, name2;


    public Zvonok(int nomer, String name1, String name2, int den, int mes, int god,
                  int chas, int minuta, int dlina) {
        this.nomer = nomer;
        this.god = god;
        this.mes = mes;
        this.den = den;
        this.chas = chas;
        this.minuta = minuta;
        this.name1 = name1;
        this.name2 = name2;
        this.dlina = dlina;
        dataa = den + (mes * 30) + (god * 365);
        time = chas * 60 + minuta;
        dv = dataa * 1440 + time;
    }

    public String vivod() {
        return (" | " + nomer + " | " + name1 + " | " + name2 + " | " + den + "." + mes + "." + god +
                " | " + chas + ":" + minuta + " | " + dlina + " | ");
    }


}

