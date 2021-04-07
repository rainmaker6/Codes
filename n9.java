import java.util.*;
import java.lang.*;
public class n9 {
        public static void main(String[] args) {
//        int[] arr =new int[3];
        Scanner s=new Scanner(System.in);
       // int a[]={1,2,3,4,5};
       // int b[]={1,2,3,4,5};
        //if(a.equals(b)) System.out.print("Equal\n");//address compare
       // else System.out.print("Not Equal\n");
       // if(Arrays.equals(a,b)) System.out.print("Equal");//array compare
       // else System.out.print("Not Equal\n");
//        String s="hello";
        String[] ss=new String[10];
        for(int i=0;i<10;++i) ss[i]=s.next();
        for(int i=0;i<ss.length;++i) System.out.print(ss[i].toUpperCase());
        //int[][] z=new int[2][4];//2d array
        System.out.print("\n");       
        int w[][]={{1,2},{3,4}};
        int l[][]={{1,2},{3,4}};
        int[][] arr =new int[2][2];
        for(int i=0;i<2;++i) {
            for(int j=0;j<2;++j) {
              arr[i][j]=w[i][j]+l[i][j];
                      System.out.print(arr[i][j]+" ");
              }
                      System.out.println();
              }
        System.out.print("\n");
        for(int i=0;i<w.length;++i) {
            for(int j=0;j<w[i].length;++j)
                System.out.print(w[i][j]+" ");
                        System.out.print("\n");
                }
                        System.out.println();
        for(int[] i:w) {
        for(int c=0;c<i.length;++c)
            System.out.print(i[c]+" ");
                    System.out.println();
            }
        //pass array to function sum(int[] a)
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
        
        //int[] arr =new int[10];
          //  int st=0;
            //for(int i=0;i<10;++i) {
           // arr[i]=s.nextInt();
            //if(arr[i]>=10) ++st;
            //}
            
            //System.out.println("Values that are greater than 10 are:"+st+"in number"+"\n");
            }
        
    }