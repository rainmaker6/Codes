//import java.util.Scanner;
//import java.lang.*;
interface A {
    public static final int a=5;
    int b=6;
    abstract void display();//Implictly all methods are abstact by default
    void sayHello();// public static final and public abstract void are inserted before variables and method respectively 
    //by the complier 
    }
    interface B extends A {
    void abc();
    }//all methods in interface are abstact
    interface C extends B{
    void xyz();
    }//interface can be implemented by the class
    class Myclass implements A,B,C {// Multiple Inheritence // extends C
    //A class can only extends one class so we can make ladder in interfaces and extends in Myclass or implements all the 
    //interfaces at once in Myclass
        public void display() {//class is agreeing to follow all the methods of the interface
            System.out.println(a);
            System.out.println(b);
            System.out.println("This is my class");
            }
            public void sayHello() {
                System.out.println("Hello bruuhhh...");
                }
                public void abc() {
                    System.out.println("abc");
                    }
                    public void xyz() {
                        System.out.println("xyz");
                        }
        }
public class n14 {
public static void main(String[] args) {
        Myclass myclass = new Myclass();
        myclass.display();
        myclass.sayHello();   
        myclass.abc();
        myclass.xyz();
        }
         
    }
