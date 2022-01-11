import java.util.Scanner;

public class reverse
{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String S = s.nextLine();
        
        String S1 = "";
        for (int i = 0; i < S.length(); i++) {
            S1 = S.charAt(i) + S1;
        }
        System.out.println("Method 1 : " + S1);

        String S2 = new String(S);
        String rev = new StringBuffer(S2).reverse().toString();
        System.out.println("Method 2 : " + rev);

        System.out.println("Original String : " + S);
        
        s.close();
    }
}