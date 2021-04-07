import java.util.Scanner;
import javax.swing.JOptionPane;
public class n2 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);//System is the class and in is object
        System.out.println("Enter age:");
        String name=s.nextLine();
        System.out.println("The age is:"+name);
        //int i=(int)3.5;
        //int j=(int)8L;
        //long k=(int)24.34;
        //System.out.println(i+j+k);
        //input from user command line,scanner class,JOptionPane
        int a=s.nextInt();
        int b=s.nextInt();
        double c=s.nextDouble();
        System.out.println("The Sum is:"+(a+b+c));//it will concatinate without ()
        int d=Integer.parseInt(JOptionPane.showInputDialog(null,"Enter value"));//shows dialog box for entering input
        int e=Integer.parseInt(JOptionPane.showInputDialog("Enter value"));//parsing to int as default is string
        String k=JOptionPane.showInputDialog("Enter your name:");
        JOptionPane.showMessageDialog(null,k);
        System.out.println("The Sum is:"+(d+e));
        }

}