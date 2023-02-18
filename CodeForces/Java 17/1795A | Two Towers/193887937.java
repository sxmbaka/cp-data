import java.net.SocketTimeoutException;
import java.util.Scanner;
 
public class sol2 {
    public static boolean isBeautiful(String s) {
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                return false;
            }
        }
        return true;
    }
 
    public static boolean hasOnlyOneRepOf2(String s) {
        int rep = 1, repc = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            rep = 1;
            if (s.charAt(i) == s.charAt(i + 1)) {
                repc++;
                while (i < s.length() - 1 && s.charAt(i) == s.charAt(i + 1)) {
                    rep++;
                    i++;
                }
            }
            if (rep > 2) {
                return false;
            }
        }
        if (repc == 1) {
            return true;
        } else {
            return false;
        }
    }
 
    public static boolean isTopSame(String a, String b) {
        return a.charAt(a.length() - 1) == b.charAt(b.length() - 1);
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), m = sc.nextInt();
            String a = sc.next();
            String b = sc.next();
            int l1 = a.length(), l2 = b.length();
            if (isBeautiful(a)) {
                if (isBeautiful(b)) {
                    System.out.println("YES");
                    continue;
                } else {
                    if (isTopSame(a, b)) {
                        System.out.println("NO");
                        continue;
                    } else if (hasOnlyOneRepOf2(b)) {
                        System.out.println("YES");
                        continue;
                    } else {
                        System.out.println("NO");
                        continue;
                    }
                }
            } else if (isBeautiful(b)) {
                if (isBeautiful(a)) {
                    System.out.println("YES");
                    continue;
                } else {
                    if (isTopSame(a, b)) {
                        System.out.println("NO");
                        continue;
                    } else if (hasOnlyOneRepOf2(a)) {
                        System.out.println("YES");
                        continue;
                    } else {
                        System.out.println("NO");
                        continue;
                    }
                }
            } else {
                System.out.println("NO");
            }
        }
    }
}