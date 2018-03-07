/*
Nome:      Estiagem
ID:        1023
Resposta:  Accepted
Linguagem: Java 7 (OpenJDK 1.7.0) [+2s]
Tempo:     0.680s
Tamanho:   1,59 KB
Submissao: 13/06/16 14:39:26
*/
import java.io.IOException;
import java.util.Locale;
import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {	
		
    public static void main(String[] args) throws IOException {
		BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
		int N, instancia = 1;
		while(true) {
			N = Integer.parseInt(bi.readLine());
			if(N == 0) {
				break;
			}
			int vetor[] = new int[205];
			int total_agua = 0;
			int total_pessoa = 0;			
			int X, Y;
			for(int i = 0; i < N; i++) {
				String temp[] = bi.readLine().split(" ");
				X = Integer.parseInt(temp[0]);
				Y = Integer.parseInt(temp[1]);
				total_agua += Y;
				total_pessoa += X;
				vetor[(int)Y/X] += X;
			}
			if(instancia > 1) {
				System.out.println();
			}
			System.out.println("Cidade# " + instancia + ":");
			for(int i = 0, j = 0; i < 205; i++) {
				if(vetor[i] > 0) {
					if(j != 0) {
						System.out.print(" ");
					}
					System.out.printf("%d-%d", vetor[i], i);
					j++;
				}
			}
			String ans = Double.toString((double)total_agua/total_pessoa);
			String str[] = ans.split("\\.");
			if(str[1].length() == 1) {
				str[1] = "0"+str[1];
			} else {
				str[1] = str[1].substring(0, 2);
			}			
			System.out.printf(Locale.US, "\nConsumo medio: %s.%s m3.\n", str[0], str[1]);
			instancia++;
		}
    }
 
}
