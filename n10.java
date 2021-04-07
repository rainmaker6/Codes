import java.util.*;
import java.lang.*;
class Person {
    String name="HELLO";
    int age=34;
    String gender;
    public void eat() {
        System.out.println("Eat more");
        }
        public void walk() {
            System.out.println("Walk more");
            }
    }
class student extends Person {
    String program;
    int year;
    void study() {
        System.out.println("Study more "+age);
        }
        void heldexam() {
            System.out.println("Give Exam more "+name);
            }
    }
class Teacher extends Person {
    String desig;
    float salary;
    void teach() {
        System.out.println("Teach more");
        }
        void takeexam() {
            System.out.println("Take exam more");
            }
    
    }
class Doctor extends Person {//inhereritence
    String desig;
    float salary;
    void checkup() {
        System.out.println("Checkup more");
        }
        void prescribe() {
            System.out.println("Prescribe more");
            }
    
    }
class Faculty {
    float sal=100000;
    }
class HRA extends Faculty {
    float hra=2000;
    }   
class DA extends HRA {
    float da=3000;
    }   
    
public class n10 extends DA {
        float bonus=4000;
        public static void main(String[] args) {
        //Scanner s=new Scanner(System.in);
            //overriding runtime polymorphism
            Person p=new Person();
            student s=new student();
            Teacher t=new Teacher();
            Doctor d=new Doctor();
            p.eat();p.walk();
            s.eat();s.walk();
            s.heldexam();s.study();
            t.eat();t.teach();
            t.takeexam();
            d.checkup();d.prescribe();
            d.walk();d.eat();
            DA dd=new DA();
            float x=dd.hra+dd.da+dd.sal;
            System.out.println(x);
            }
        
    }