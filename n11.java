//import java.util.Scanner;
//import java.lang.*;
//method overriding dynamic polymorphism
class vehicle {
    void run() {
        System.out.println("Vehicle class");      
        }
    }
class bike extends vehicle {
    void run() {
        System.out.println("bike class");      
        }
    }
class Bank {//method overriding dynamic polymorphism / different definations everywhre
    void getRateOfInterest(int x) {
        System.out.println("Rate of interest is :"+x);
        }  
    }
class SBI extends Bank {
    void getRateOfInterest(int x) {
        System.out.println("Rate of interest is 8% :"+(8*x)/100);//Calculated for 1 year
        }  
    }
class ICICI extends Bank {
    void getRateOfInterest(int x) {
        System.out.println("Rate of interest is 7% :"+(7*x)/100);
        }  
    }
class Axix extends Bank {
    void getRateOfInterest(int x) {
        System.out.println("Rate of interest is 9% :"+(9*x)/100);
        }  
    }
class Base {
    public int calculate(int a,int b) {
        return a+b;
        }
    }
class Derived extends Base {
    public int calculate(int a,int b) {
        return a*b;
        }
    }    
public class n11 {
        public static void main(String[] args) {
           // Scanner s=new Scanner(System.in);
         // System.out.print("\n");
             vehicle v=new vehicle();
             bike b=new bike();
             v.run();
             b.run();
             Bank bank =new Bank();
             SBI sbi = new SBI();
             ICICI icici = new ICICI();
             Axix axix = new Axix();
             bank.getRateOfInterest(1000);
             sbi.getRateOfInterest(2000);
             icici.getRateOfInterest(3000);
             axix.getRateOfInterest(4000);
             Base base=new Base();
             Derived derived=new Derived();
             int xx=base.calculate(1,2);
             int yy=derived.calculate(3,4);
             System.out.println(xx);
             System.out.println(yy);
            }
             
    }