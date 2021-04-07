//import java.util.Scanner;
//import java.lang.*;
abstract class Animal {
    abstract void makeSound();
    void display() {
        System.out.println("This is Animal class");
        }
    }
    class Cat extends Animal {
        void makeSound() {
            System.out.println("This is subclass Cat");
            }
        }
        abstract class Shape {
            abstract void draw();
            }
            class Circle extends Shape {//concrete class means no abstract methods
                void draw() {
                    System.out.println("This is circle class");
                    }
                }
                class Rectangle extends Shape {
                    void draw() {
                        System.out.println("This is rectangle class");
                        }
                    }
                    abstract class Base {
                        abstract void fun();
                        abstract void get();
                        abstract void set();
                        abstract void display();
                        }
                        class Subclass extends Base {
                            void fun() {
                                System.out.println("This is fun");
                                }                             
                            }
                    //we can make as many constructors in abstract class
                    //instance variables can't be abstract
                    //through subclass we can call constructor of abstract class
                    public class n13 {//concrete class which implements the methods of abstract class
                    //abstract class can't be final implementation in base class 
                    //using super keyword
                    //if there is any abstract method in class then the class must be abstract
                    
                    public static void main(String[] args) {
                    //Animal a = new Animal();// we can't create the object of abstract class
                    Cat cat = new Cat();
                    cat.makeSound();
                    Circle circle = new Circle();
                    circle.draw();
                    Rectangle rectangle = new Rectangle();
                    rectangle.draw();
                    Subclass subclass = new Subclass();
                    subclass.fun();
                    }
            
            }