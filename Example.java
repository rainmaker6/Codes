/*public class Example {
public static void main(String[] args) {
System.out.print(add(6,4));
}
static int add(int a,int b) {
return a+b;
}

}
*/
class Car {
    int gears=6;
    double price=2434.234;
    int wheels=4;//literal
    String manu="BMW";//instance variable
    String color="Black";
    public void breaking() {//instance methods
        int gears=6;
        System.out.println("This is from breaking");
        System.out.println(gears);//instance variable
        System.out.println(this.gears);//local variable
        }
        public void speed() {
            System.out.println("This is from speed");
            }
            public void Accelerating() {
                System.out.println("This is from Accelerating");
                }
    }
class Flight {
    int gears=10;
    double price=2434.234;
    int wheels=2;//literal
    String manu="Rolls Royce";//instance variable
    String color="White";
    public void breaking() {//instance methods
        int gears=6;
        System.out.println("This is from breaking");
        System.out.println(gears);//instance variable
        System.out.println(this.gears);//local variable
        }
        public void speed() {
            System.out.println("This is from speed");
            }
            public void Accelerating() {
                System.out.println("This is from Accelerating");
                }
    }
class Person {
    int age=5;
    double salary=2434.234;
    int id=2;//literal
//    String manu="Hero";//instance variable//
//    String color="Black";
    public void walking() {//instance methods
    //    int gears=6;
        System.out.println("This is from walkling");
      //  System.out.println(gears);//instance variable
       // System.out.println(this.gears);//local variable
        }
        public void eating() {
            System.out.println("This is from eating");
            }
           
    }

class Bicycle {
    int gears=5;
    double price=2434.234;
    int wheels=2;//literal
    String manu="Hero";//instance variable
    String color="Black";
    public void breaking() {//instance methods
        int gears=6;
        System.out.println("This is from breaking");
        System.out.println(gears);//instance variable
        System.out.println(this.gears);//local variable
        }
        public void speed() {
            System.out.println("This is from speed");
            }
            public void Accelerating() {
                System.out.println("This is from Accelerating");
                }
    }
public class Example {
    public static void main(String[] args) {
        Bicycle cycle1=new Bicycle();//cycle1 is object new keyword helps to dynimically allocates the memory dynicamally
        cycle1.breaking();
        cycle1.Accelerating();
        cycle1.speed();
        System.out.println(cycle1.gears);
        System.out.println(cycle1.price);
        System.out.println(cycle1.wheels);
        System.out.println(cycle1.manu);
        System.out.println(cycle1.color);
        Car car=new Car();
        car.breaking();
        car.speed();
        car.Accelerating();
        System.out.println(car.gears);
        System.out.println(car.price);
        System.out.println(car.wheels);
        System.out.println(car.manu);
        System.out.println(car.color);
        Flight f=new Flight();
        f.breaking();
        f.speed();
        f.Accelerating();
        System.out.println(f.gears);
        System.out.println(f.price);
        System.out.println(f.wheels);
        System.out.println(f.manu);
        System.out.println(f.color);
        Person p=new Person();
        p.eating();
        p.walking();
        }
    
    }