/*
Nome:      Criptografia
ID:        1024
Resposta:  Accepted
Linguagem: Java
Tempo:     1.472s
Tamanho:   1,67 KB
Submissao: 07/06/16 14:22:00
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
	
	private static class Criptografy {
		
		private String text;
		
		public Criptografy(String text) {
			this.text = text;
		}

		private String first_step(String text) {
			String new_text = "";
			for(int i = 0; i < text.length(); i++) {
				if(Character.isLetter(text.charAt(i))) {
					new_text += (char)(text.charAt(i) + 3);
				} else {
					new_text += text.charAt(i);
				}
			}
			return new_text;
		}
		
		private String second_step(String text) {
			String new_text = "";
			for(int i = text.length()-1; i >= 0; i--) {
				new_text += text.charAt(i);
			}
			return new_text;
		}
		
		private String third_step(String text) {
			String new_text = "";
			for(int i = 0; i < (int)(text.length()/2); i++) {
				new_text += text.charAt(i);
			}			
			for(int i = (int)(text.length()/2); i < text.length(); i++) {
				new_text += (char)(text.charAt(i) - 1);
			}
			return new_text;
		}
		
		public String encrypt() {
			return third_step(second_step(first_step(text)));
		}
	}
	
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int N = Integer.parseInt(sc.next());
		sc.nextLine(); // clean buffer		
		for(int i = 0; i < N; i++) {
			String expr = sc.nextLine();
			Criptografy cript = new Criptografy(expr);
			System.out.println(cript.encrypt());
		}
    }
 
}
