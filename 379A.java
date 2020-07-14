/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication9;

import java.util.Scanner;


/**
 *
 * @author Sidd
 */
public class NewClass {
    
  
    
    public static void main(String[] args){
        Scanner ss = new Scanner(System.in);
        int a;
        int b;
        int c;
        int sum =0;
        
        a = ss.nextInt();
        b= ss.nextInt();
        
        //b = Integer.parseInt(reader.readLine());
        //System.out.println(a+ b);
        
        sum = a;
        while(true){
            c =a/b;
            a = c+(a%b);
            sum =sum + c;
            if(a < b){
                break;
            }
        }
        System.out.println(sum);
    
    }
}
