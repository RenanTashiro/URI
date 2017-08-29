/*
Nome:      Figurinhas
ID:        1028
Resposta:  Accepted
Linguagem: Java
Tempo:     0.308s
Tamanho:   683 Bytes
Submissao: 07/06/16 14:29:15
*/
import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {	
	
	private static int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}
	
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for(int i = 0; i < N; i++) {
			int F1 = sc.nextInt();
			int F2 = sc.nextInt();
			System.out.println(gcd(F1, F2));
		}
    }
 
}
