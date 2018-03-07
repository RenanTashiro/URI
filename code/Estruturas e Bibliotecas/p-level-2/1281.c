/*
Nome:      TDA Racional
ID:        1022
Resposta:  Accepted
Linguagem: Java 7 (OpenJDK 1.7.0) [+2s]
Tempo:     0.212s
Tamanho:   1,82 KB
Submissao: 06/06/16 14:41:32
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
 
	private static class MathExpr {
		
		private int N1, N2, D1, D2;
		private char O1, OB, O2;
		
		private int gcd(int a, int b) {
			return b == 0 ? a : gcd(b, a % b);
		}	
		
		public MathExpr(int N1, int D1, int N2, int D2, char O1, char OB, char O2) {
			this.N1 = N1;
			this.D1 = D1;
			this.N2 = N2;
			this.D2 = D2;
			this.O1 = O1;
			this.OB = OB;
			this.O2 = O2;
		}
		
		public void show() {
			int N, D;
			switch(OB) {
				case '+': 
					N = N1*D2 + N2*D1; 
					D = D1*D2;
					break;
				case '-': 
					N = N1*D2 - N2*D1; 
					D = D1*D2;
					break;
				case '*': 
					N = N1*N2;
					D = D1*D2;					
					break;
				default: 
					N = N1*D2;
					D = N2*D1;
					break;
			}
			int GCD = gcd(N, D);
			int newN = N/GCD, newD = D / GCD;
			if(D < 0) {
				N = -N;
				D = -D;
			}
			if(newD < 0) {
				newN = -newN;
				newD = -newD;
			}
			System.out.println(N + "/" + D + " = " + newN + "/" + newD);
		}
	}

    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int N = Integer.parseInt(sc.next());
		for(int i = 0; i < N; i++) {
			int N1 = Integer.parseInt(sc.next());
			char O1 = sc.next().charAt(0);
			int D1 = Integer.parseInt(sc.next());
			char OB = sc.next().charAt(0);
			int N2 = Integer.parseInt(sc.next());
			char O2 = sc.next().charAt(0);
			int D2 = Integer.parseInt(sc.next());
			MathExpr mathExpr = new MathExpr(N1, D1, N2, D2, O1, OB, O2);
			mathExpr.show();
		}
    }
 
}
