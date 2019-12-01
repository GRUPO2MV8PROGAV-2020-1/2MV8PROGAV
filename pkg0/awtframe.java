/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg0;

/**
 *
 * @author Sala2
 */
import java.awt.*;


public class awtframe {
   Frame F;
   Button B;
   TextArea TA;
   TextField TF;

    public awtframe() {
        F=new Frame("GUI Manejo de eventos");
        F.setLayout(new FlowLayout());
        B=new Button("AGREGAR");F.add(B);
        F.add(TF=new TextField("Write here"));
        F.add(TA=new TextArea());
        
        F.setSize(600, 200);
        F.setLocationRelativeTo(null);
        F.setVisible(true);
    }//end awtframe
    public static void main(String[] args) {
        new awtframe();
    }
}/*end class awtframe*/
