class Car {
    int gears=6;
    double price=2434.234;
    static int wheels=4;//literal
    String manu="BMW";//instance variable
    String color="Black";
    public void breaking() {//instance methods
        int gears=6;
        System.out.println("This is from breaking");
        System.out.println(gears);//instance variable
        System.out.println(this.gears);//local variable
        }
        public static void speed() {
            System.out.println("This is from speed");
            }
            public static void Accelerating() {
                System.out.println("This is from Accelerating");
                }
    }
//51 keywords in java newly 
public class n1 {//instance variable values changes car to car static int b;//global variable is initillialized as 0
static int b;
public static void main(String[] arr) {
//    System.out.println()
//    System.out.println(arr[0]);
  //      System.out.println(arr[1]);
    //        System.out.println(arr[2]);
    int s=Integer.parseInt(arr[0])+Integer.parseInt(arr[1])+Integer.parseInt(arr[2]);
    
   // for(int i=0;i<arr.length;++i) {
     //   s+=arr[i];//pass value through cmd
      //  }
        System.out.println(s);
    int a=6;
    System.out.println(a);
    System.out.println(b);
    Car c=new Car();
    c.breaking();
    c.speed();
    c.Accelerating();
    //c.wheels=2134;//stataic is like passing by refrence and final is const in java
    //static variables are common to all classes
    System.out.println(c.wheels);
    }

}