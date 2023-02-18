import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;
 
public class a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            int hp = 1;
            long c = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] >= hp) {
                    c += arr[i] - hp;
                    hp++;
                }
            }
            System.out.println(c);
        }
    }
}