/*
Nome:      Teste de Seleção 1
ID:        1035
Resposta:  Accepted
Linguagem: Java 7 (OpenJDK 1.7.0) [+2s]
Tempo:     0.060s
Tamanho:   1,05 KB
Submissao: 07/06/16 13:33:38
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
	
	private static class Select {
		
		private int A, B, C, D;
		
		public Select(int A, int B, int C, int D) {
			this.A = A;
			this.B = B;
			this.C = C;
			this.D = D;
		}
		
		public boolean accept() {
			return B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0;
		}
	}

    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int A, B, C, D;
		A = Integer.parseInt(sc.next());
		B = Integer.parseInt(sc.next());
		C = Integer.parseInt(sc.next());
		D = Integer.parseInt(sc.next());
		Select sel = new Select(A, B, C, D);
		if(sel.accept()) {
			System.out.println("Valores aceitos");
		} else {
			System.out.println("Valores nao aceitos");
		}
    }
 
}
