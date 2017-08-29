/*
Nome:      Fibonacci, Quantas Chamadas?
ID:        1029
Resposta:  Accepted
Linguagem: Java
Tempo:     0.052s
Tamanho:   1,21 KB
Submissao: 07/06/16 14:58:48
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
	
	private static class Fibonacci {
		
		private int n;
		
		public Fibonacci(int n) {
			this.n = n;
		}
		
		public int getN() {
			return n;
		}
		
		public int value() {
			int fib[] = new int[2];
			fib[0] = 1;
			fib[1] = 1;
			for(int i = 2; i < n; i++) {
				int tmp = fib[0] + fib[1];
				fib[0] = fib[1];
				fib[1] = tmp;
			}
			return fib[1];
		}
		
		public int calls() {
			int cal[] = new int[n+1];
			cal[0] = 1;
			cal[1] = 1;
			for(int i = 2; i <= n; i++) {
				cal[i] = cal[i-1] + cal[i-2] + 1;
			}
			return cal[n]-1;
		}
	}
	
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		for(int i = 0; i < N; i++) {
			Fibonacci fib = new Fibonacci(sc.nextInt());
			System.out.println("fib(" + fib.getN() + ") = " + fib.calls() + " calls = " + fib.value());
		}
    }
 
}
