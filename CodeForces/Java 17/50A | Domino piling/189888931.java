import java.util.Scanner;
 
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        System.out.println((int)Math.floor((n*k)/2));
    }
}