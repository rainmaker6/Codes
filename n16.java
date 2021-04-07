@FunctionalInterface
interface Hello {
    void sayHello();
    //fuctional interface allows to add only one abstract method
    }
    class Test implements Hello {
    public void sayHello() {
        System.out.println("Hello fellas");
        }
    }
public class n16 {
    public static void main(String[] args) {
        Test test = new Test();
        test.sayHello();
        Hello h = new Hello() {
            public void sayHello() {
                System.out.println("Hello");
                }
            };
            Hello hello=()->{
                System.out.println("Hello Guys");
                };
                hello.sayHello();
               //without return type and method defination we can implement
               //the lamda expressions 
               Hello hh=(s,t)-> {//include paramaters in interface also if want to compile
               //can include more than one operations
               //lamda expressions reduces the line of code
               System.out.println(s+" "+t);
               };
               hh.sayHello("HEllo","Welcome");
        }
    }    