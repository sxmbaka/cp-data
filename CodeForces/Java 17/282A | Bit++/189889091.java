import java.util.Scanner;
 
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, t = sc.nextInt();
        while (t-- > 0) {
            String op = sc.next();
            if (op.endsWith("--") || op.startsWith("--")) {
                x--;
            }
            else {
                x++;
            }
        }
        System.out.println(x);
    }
}