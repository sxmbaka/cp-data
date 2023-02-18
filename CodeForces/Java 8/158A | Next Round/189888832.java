import java.util.Scanner;
 
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int val = arr[k - 1], ans = 0;
        for (int i = 0; i < n; i++) {
            if (val == 0) {
                if (arr[i] > val) {
                    ans++;
                }
            }
            else {
                if (arr[i] >= val) {
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}