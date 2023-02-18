import java.util.Scanner;
 
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String word = sc.next();
            int len = word.length();
            if (len <= 10) {
                System.out.println(word);
                continue;
            }
            System.out.println(word.charAt(0) + "" + (len-2) + word.charAt(len-1));
        }
    }
}