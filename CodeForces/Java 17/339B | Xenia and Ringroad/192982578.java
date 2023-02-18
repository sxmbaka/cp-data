import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
 
public class a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // String s = sc.next();
        int n = sc.nextInt(), m = sc.nextInt();
        int[] arr = new int[m + 1];
        arr[0] = 1;
        for (int i = 1; i < m + 1; i++) {
            arr[i] = sc.nextInt();
        }
        long sum = 0;
        for (int i = 1; i < m + 1; i++) {
            if (arr[i] < arr[i-1]) {
                sum += n - (arr[i-1] - arr[i]);
            } else {
                sum += arr[i] - arr[i - 1];
            }
        }
        System.out.println(sum);
    }
}