import java.util.Scanner;
import Addition.*;
import Addition.Subtraction.*;
import Addition.Subtraction.Multiplication.*;
import Addition.Subtraction.Multiplication.Division.*;
public class Calculator
{
public static void main(String[] args)
{
//System.out.println("Hello");
Scanner s=new Scanner(System.in);
System.out.println("Enter First Number:");
int a=s.nextInt();
System.out.println("Enter Second Number:");
int b=s.nextInt();
Addition add=new Addition();
add.compute(a,b);
Subtraction sub=new Subtraction();
sub.compute(a,b);
Multiplication mul=new Multiplication();
mul.compute(a,b);
Division div=new Division();
div.compute(a,b);
}
}