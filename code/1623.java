import java.io.IOException;
import java.util.Scanner;
import java.math.BigInteger;
 
public class 1623 {
  
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        while(true) {
            int N = sc.nextInt(), Q = sc.nextInt();
            if(N == 0 && Q == 0) break;
            BigInteger T = sc.nextBigInteger(), value = BigInteger.ONE;
            for(int i = 2; i <= (N - Q + 1); i++) {
                value = value.multiply(BigInteger.valueOf(i));
            }
            if(value.compareTo(T) <= 0) {
                System.out.println(value);
            } else {
                System.out.println("descartado");
            }
        }
    }
}
