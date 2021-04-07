import java.util.*;
public class n18 {
    public static void main(String[] args) throws ArithmeticException {
            try{
             int a=3/0;
             int sp[]={1,2,3,4,5,3};
             System.out.println(sp[3]);
             String s=null;
             System.out.println(s.length());
            }catch(ArithmeticException | NullPointerException e){
                System.out.println("airthemetic exception occured or nullpointer exception occured");
            }catch(Exception e){
                e.printStackTrace();
            }
            finally{
                System.out.println("final block executed");
            }
            //throws with multiple expressions
            
        }
    }    