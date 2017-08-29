/*
Nome:      Onde está o Mármore?
ID:        1025
Resposta:  Accepted
Linguagem: Java
Tempo:     1.512s
Tamanho:   1,25 KB
Submissao: 13/06/16 13:42:01
*/
import java.io.IOException;
import java.util.Scanner;
import java.util.Arrays;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {	
	
	public static int solve(int numbers[], int key) {
		int pos = Arrays.binarySearch(numbers, key);
		if(pos < 0) {
			return -1;
		} else {
			while(pos > 0 && numbers[pos-1] == key) {
				pos--;
			}
		}
		return pos+1;
	}
	
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int N, Q, caso = 1;
		while(true) {
			N = sc.nextInt();
			Q = sc.nextInt();
			if(N == 0 && Q == 0) {
				break;
			}
			int numbers[] = new int[N];
			for(int i = 0; i < N; i++) {
				numbers[i] = sc.nextInt();
			}	
			Arrays.sort(numbers);
			System.out.println("CASE# " + caso++ + ":");
			int key;		
			for(int i = 0; i < Q; i++) {
				key = sc.nextInt();
				int ans = solve(numbers, key);
				if(ans == -1) {
					System.out.printf("%d not found\n", key);
				} else {
					System.out.printf("%d found at %d\n", key, ans);
				}
			}
		}
    }
 
}
