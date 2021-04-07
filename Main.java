
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        main: for (int i=25; i<s.length(); i++) {
            boolean[] seen = new boolean[26];
            for (int j=i-25; j<=i; j++) {
                char c = s.charAt(j);
                if (c == '?') {
                    // no-op
                } else if (seen[c-'A']) {
                    continue main;
                } else {
                    seen[c-'A'] = true;
                }
            }
            // possible
            StringBuilder builder = new StringBuilder(s);
            int idx = 0;
            for (int j=i-25; j<=i; j++) {
                char c = s.charAt(j);
                if (c == '?') {
                    while (seen[idx]) idx++;
                    builder.setCharAt(j, (char)('A' + idx));
                    idx++;
                }
            }
            System.out.println(builder.toString().replace('?', 'A'));
            return;
        }
        System.out.println("-1");
    }

}
