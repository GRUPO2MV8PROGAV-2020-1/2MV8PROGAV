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
//import java.awt.Event.*;
import java.awt.event.*; // 1/5

public class awtframe implements ActionListener{
    Frame F;
    Button B;
    TextArea TA;
    TextField TF;

    public awtframe() {
        F = new Frame("GUI Manejo de Eventos");
        F.setLayout(new FlowLayout());
        B = new Button("Add"); F.add(B);
        F.add(TF=new TextField("Write Here"));
        F.add(TA=new TextArea());
        TA.setEditable(false);
        F.addWindowListener(new WindowAdapter(){ // 2/5 3/5
            public void windowClosing(WindowEvent we){// 4/5
                F.dispose();// 5/5
                System.exit(0);
            }
        });
        
        B.addActionListener(this); // 3/5
        
        F.setSize(600, 200);
        F.setLocationRelativeTo(null);
        F.setVisible(true);
    }
    
    public static void main(String[] args) {
        new awtframe();
    }

    @Override
    public void actionPerformed(ActionEvent ae) { // 4/5
        if(B.equals(ae.getSource())) { // 5/5
            String txt0 = TA.getText();
            String txt1 = TF.getText();
            txt0 = txt0+txt1+'\n';
            TA.setText(txt0);
        }
    }
    
}//end class awtframe
