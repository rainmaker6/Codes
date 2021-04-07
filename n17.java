import java.util.*;
public class n17 {
    public static void main(String[] args) {
            //String s="Hello";
            //String t="Hell";
            //String u=s+t;
            //String v="HelloHell";
            //String w="    Hello H e ll   ";
            //if(s==t) {
              //  System.out.println("YES");
            //}
            //else System.out.println("NO");
            //System.out.println(u);
            //if(u.equals(v)) System.out.println("Equal");
            //else System.out.println("Not Equal");
            
            //System.out.println(u.compareTo(v));//which string how many characters are greater in string u
            //System.out.println(v.charAt(5));
            //System.out.println(u.toUpperCase());
            //System.out.println(u.replace('H','h'));
            //System.out.println(w.trim());//trim fuction to remove whitespaces leading and trailing
            //System.out.println(w.substring(1,6));
            //System.out.println(w.startWith("He"));
            //System.out.println(w.endWith("ll"));
           // String ss[]=w.split(" ");
            //for(String i:ss) System.out.println(i);
            List ll = new ArrayList();
            ll.add(1);
            ll.add(2);
            ll.add(7);
            ll.add(8);
            ll.add(5);
            ll.remove(3);
            for(Object i:ll) System.out.print(i+" ");
            
            System.out.println("");
            
            List l=new LinkedList();
            l.add(1);
            l.add(2);
            l.add(5);
            for(Object i:l) System.out.print(i+" ");
            
            System.out.println("");
            
            Set set = new HashSet();//TreeSet is ordered
            set.add(1);
            set.add(2);
            set.add(5);
            set.add(1);
            set.add(2);
            set.add(5);
            set.add(1);
            set.add(2);
            set.add(5);
            for(Object i:set) System.out.print(i+" ");
            
            Set Tset = new TreeSet();//TreeSet is ordered 
            Tset.add(1);
            Tset.add(2);
            Tset.add(5);
            Tset.add(1);
            Tset.add(2);
            Tset.add(5);
            Tset.add(1);
            Tset.add(2);
            Tset.add(5);
            for(Object i:Tset) System.out.print(i+" ");
            
            System.out.println("");
            
            Map m = new HashMap();//To print HashMap we need to use lambda expressions
            //Map<String,String> map = new HashMap<String,String>(); // String mapped to String
            //TreeMap will be in order according to key values
            m.put("A",1);
            m.put("B",2);
            m.put("C",3);
            m.forEach((k,v)->System.out.print(k+":"+v+"\n"));
            
        }
    }    