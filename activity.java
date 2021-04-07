//import java.util.Scanner;
//import java.lang.*;
interface addition {
     void add(int a, int b);  
    }
    interface subtract {
    void sub(int a,int b);
    }
    interface multiply{
    void mul(int a,int b);
    }
    interface division{
        void div(int a,int b);
        }
   class Calculator implements addition,subtract,multiply,division {
        public void add(int a,int b) {
            System.out.println("The Sum is:"+(a+b));
            }
            public void sub(int a,int b) {
                System.out.println("The Difference is:"+(a-b));
                }
                public void mul(int a,int b) {
                    System.out.println("The Product is:"+(a*b));
                    }
                    public void div(int a,int b) {
                        System.out.println("The result after division is:"+(a/b));
                        }
        }
public class activity {
public static void main(String[] args) {
        Calculator calculator = new Calculator();
        calculator.add(4,2);
        calculator.sub(4,2);   
        calculator.mul(4,2);
        calculator.div(4,2);
        }
         
    }
