/*
Nome:      Carrega ou não Carrega?
ID:        1026
Resposta:  Accepted
Linguagem: Java
Tempo:     0.664s
Tamanho:   553 Bytes
Submissao: 07/06/16 13:44:14
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
		
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
			System.out.println(Long.parseLong(sc.next()) ^ Long.parseLong(sc.next()));
		}
    }
 
}
