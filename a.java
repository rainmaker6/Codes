import java.util.Scanner;
public class a{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int T=s.nextInt();
        while(T>0){
            int nt=0;
            int a=s.nextInt();
            int b=s.nextInt();
            while(a!=0){
                if(a<0) a++;
                else a=(a+b-1)/b;
                ++nt;
            }
            System.out.println(nt);
            --T;
        }
    }
}