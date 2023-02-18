import java.util.Scanner;
 
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), res = 0;
        while (t-- > 0) {
            int a, b, c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if (a + b + c >= 2) {
                res++;
            }
        }
        System.out.println(res);
    }
}