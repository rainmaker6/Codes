import java.util.*;
import java.lang.*;
public class n8 {
        public static void main(String[] args) {
//        int[] arr =new int[3];
       // int a[]={1,2,3,4,5};
        //int[] b=new int[a.length];
        //for(int i=0;i<(int)b.length;++i)
           // b[i]=a[i];
        //for(int i=0;i<(int)b.length;++i)
         //  System.out.print(b[i]+" ");
       // System.out.print("\n");      
       // int[] c=Arrays.copyOf(a,a.length);//direct copying
       // for(int i=0;i<(int)c.length;++i)
         //  System.out.print(c[i]+" ");    
        //b=a.clone;//copying array directly
        //System.out.println(source,srcpos,destination,destpos,length);
        // for(int i=0;i<3;++i) st+=arr[i]; 
        Scanner s=new Scanner(System.in);
        int[] arr =new int[10];
            int st=0;
            for(int i=0;i<10;++i) {
            arr[i]=s.nextInt();
            if(arr[i]>=10) ++st;
            }
            
            System.out.println("Values that are greater than 10 are:"+st+"in number"+"\n");
            }
        
    }