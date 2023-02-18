import java.util.Scanner;
import java.util.Stack;
 
public class c {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int alice = 0;
            int bob = 0;
            int addend = 0;
            int cnt = 0;
            while (n >= addend) {
                // System.out.println("addend = "+addend+" cnt = "+cnt);
                if (cnt == 4) {
                    cnt = 0;
                }
                if (cnt < 2) {
                    alice += (n < addend) ? n : addend;
                    n -= addend;
                    addend++;
                    cnt++;
                } else {
                    bob += (n < addend) ? n : addend;
                    n -= addend;
                    addend++;
                    cnt++;
                }
                // System.out.println("n = "+n);
                // System.out.println("a="+alice+" b="+bob);
            }
            if (cnt < 2 || cnt == 4) {
                alice += n;
            } else {
                bob += n;
            }
            // System.out.println(cnt);
            System.out.println(alice + " " + bob);
 
        }
    }
}