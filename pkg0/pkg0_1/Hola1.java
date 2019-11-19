/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg0.pkg0_1;
import java.util.Scanner;
//import java.awt.*;
//import javax.swing.*;
/**
 *
 * @author LMC
 */
public class Hola1 {
    String S;
    Scanner scan;
    public String toString(){
        String s=S;
        return s;
    }
    public Hola1(){} //deliberadamente vacio
    public Hola1(String str){
        S=str;
    }
    public static void main(String[] args) {
        Hola1 H1=new Hola1();
        H1.S="GRUPO 2MV8";
        System.out.println(H1+" Martes 19 de noviembre de 201"+9);
        H1=new Hola1("2MV3");
        System.out.println(H1);
        H1.scan=new Scanner(System.in);
        System.out.println("Escriba una línea");
        String nstring=H1.scan.nextLine();
        Hola1 H2=new Hola1(nstring);
        System.out.println("H2:"+H2);
    }//end main()
}//end class pkg0.pkg0_1.Hola1
