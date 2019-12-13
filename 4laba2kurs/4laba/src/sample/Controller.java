package sample;

import javafx.event.ActionEvent;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

import javax.swing.*;
import java.awt.*;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class Controller {

    public Button knopka;
    public Label koreya;

    public int sk = 6;
    public int i = 0;
    public TextField newnom;
    public TextField newname1;
    public TextField newday;
    public TextField newname2;
    public TextField newmonth;
    public TextField newyear;
    public TextField newhour;
    public TextField newminute;
    public TextField newdlina;
    List<Zvonok> zvonki = new ArrayList<Zvonok>();
    Zvonok prim1 = new Zvonok(1, "Кирилл", "Вова", 14, 12, 2003, 15,31, 12);
    Zvonok prim2 = new Zvonok(2, "Вова", "Дима", 18, 10, 2002, 10,17, 18);
    Zvonok prim3 = new Zvonok(3, "Сара", "Конор", 13, 11, 2001, 16,43, 21);
    Zvonok prim4 = new Zvonok(4, "Галя", "Груша", 14, 12, 2003, 15,31, 12);
    Zvonok prim5 = new Zvonok(5, "Хагрид", "Окулист", 22, 11, 2002, 10,34, 190);
    Zvonok prim6 = new Zvonok(6, "Кирилл", "Вова", 21, 10, 2003, 15,31, 19);


    public void vivodspiska() {
        zvonki.add(prim1);
        zvonki.add(prim2);
        zvonki.add(prim3);
        zvonki.add(prim4);
        zvonki.add(prim5);
        zvonki.add(prim6);
        String viv = new String();
        koreya.setText("ID - От кого - Кому - Дата - Время - Продолжительность");
        for (i = 0; i < sk; i++){
            viv += zvonki.get(i).vivod() + "\n";
        }
        koreya.setText(viv);
    }

    public void pluso(ActionEvent actionEvent) {
        sk++;
        Zvonok primnew=new Zvonok(Integer.parseInt(newnom.getText()),newname1.getText(),newname2.getText(),Integer.parseInt(newday.getText()),
                Integer.parseInt(newmonth.getText()),Integer.parseInt(newyear.getText()),Integer.parseInt(newhour.getText()),
                Integer.parseInt(newminute.getText()),Integer.parseInt(newdlina.getText()));
            zvonki.add(primnew);
            vivodspiska();

    }

    public void sortpd(ActionEvent actionEvent) {
        zvonki.sort(new Comparator<Zvonok>() {
            @Override
            public int compare(Zvonok z1, Zvonok z2) {
                return z1.dv - z2.dv;
            }
        });
        vivodspiska();
    }

    public void sortpdl(ActionEvent actionEvent) {
        zvonki.sort(new Comparator<Zvonok>() {
            @Override
            public int compare(Zvonok z1, Zvonok z2) {
                return z1.dlina - z2.dlina;
            }
        });
        vivodspiska();
    }

}
