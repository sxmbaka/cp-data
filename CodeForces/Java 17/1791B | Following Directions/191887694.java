import java.util.Scanner;
 
import javax.swing.text.html.HTMLDocument.HTMLReader.IsindexAction;
 
public class cf8491a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int x = 0, y = 0;
            boolean flag = false;
            String s = sc.next();
            for (int i = 0; i < n; i++) {
                switch (s.charAt(i)) {
                    case 'U':
                        y++;
                        break;
                    case 'D':
                        y--;
                        break;
                    case 'L':
                        x--;
                        break;
                    case 'R':
                        x++;
                        break;
                    default:
                        break;
                }
                if (x == 1 && y == 1) {
                    System.out.println("YES");
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                System.out.println("NO");
            }
        }
    }
}