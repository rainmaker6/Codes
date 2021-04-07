import java.util.Scanner;
public class n5 {
    public static void main(String[] args) {
       // Scanner s=new Scanner(System.in);
       // int st=0,mn=100000,mx=-1,i;
       // do{
        //  int i=s.nextInt();
         // int j=s.nextInt();
        //   mx=Math.max(mx,i);
        //   mn=Math.min(mn,i);
       // }while(i!=0);
        
       // System.out.println(mx);
       // System.out.println(mn);
      //  String s="hello";
      // System.out.println(Math.pow(i,j));
      //int a[]={1,23,3,43,54,66};
     // for(int i:a) System.out.println(i);
     // String s="H5ello Worl5d this5 is5 java";
     // String t[]=s.split("5");
     // for(String i:t) System.out.print(i);//removes the thing given in split function
      //it is also called delimiter
      for(int i=1;i<=10;++i) {
        if(i==6) break;//out if the loop
        if(i==2) continue;//skip the iteration
        System.out.println("Value of i is:"+i);
        }
        System.out.println("Exited for loop");
    }
}