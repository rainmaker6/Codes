//import java.util.Scanner;
//import java.lang.*;
class Test {
   static void a(String... a) {//as many arguments int... a,
        int n=a.length;
        String s="";
        for(String i:a) s+=i;
        System.out.println(s);      
        }
    }
public class n12 {
        public static void main(String[] args) {
            Test.a("sdht","aerh","eryh","earhe");
            Test.a("rsdg","aerh","wre");
            Test.a("rsdg","aerh");
            }
             
    }