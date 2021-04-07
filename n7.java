import java.util.*;
import java.lang.*;
class Test {
    Test() {
        System.out.println("Hello I am default constructor");
        }
    Test(String name) {
        System.out.println("Hello "+name);
        }

    }

public class n7 {
        public static void main(String[] args) {
        Test t=new Test("VIT");
        //int[] arr =new int[200]; array intillization
        //default value for all index no garbage value
        //t.clone();
        //Scanner s=new Scanner(System.in);
        //System.out.println("Enter first Number:");
        //int a=s.nextInt();
        try {
            Date d=new Date();
            Class c=d.getClass();
            System.out.println(d.toString());
            Object obj=c.newInstance();
            System.out.println(obj);            
            } catch(InstantiationException e) {
                System.out.println(e.toString());
                }catch(IllegalAccessException e) {
                    System.out.println(e.toString());
                    }
            }
        
    }