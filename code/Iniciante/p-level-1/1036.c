/*
Nome:      Fórmula de Bhaskara
ID:        1036
Resposta:  Accepted
Linguagem: Java 7 (OpenJDK 1.7.0) [+2s]
Tempo:     0.060s
Tamanho:   1,24 KB
Submissao: 06/06/16 15:02:08
*/
import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
	
	private static class Bhaskara {
		/**
		 * Calcula as raizes de um funcao de segundo grau, 
		 * pelo metodo de bhaskara.
		 */		 
		double A, B, C;
		
		public Bhaskara(double A, double B, double C) {
			this.A = A;
			this.B = B;
			this.C = C;
		}
		
		public void solve() {
			double delta = B*B-(4*A*C);
			if(A != 0.0 && delta >= 0.0) {
				delta = Math.sqrt(delta);;
				System.out.format(Locale.US, "R1 = %.5f\n", (-B+delta)/(2*A));
				System.out.format(Locale.US, "R2 = %.5f\n", (-B-delta)/(2*A));
			} else {
				System.out.println("Impossivel calcular");
			}
		}
	}

    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		double A = Double.parseDouble(sc.next());
		double B = Double.parseDouble(sc.next());
		double C = Double.parseDouble(sc.next());
		Bhaskara bha = new Bhaskara(A, B, C);
		bha.solve();
    }
 
}
