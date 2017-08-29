/*
Nome:      Notas e Moedas
ID:        1021
Resposta:  Accepted
Linguagem: Java
Tempo:     0.068s
Tamanho:   1,93 KB
Submissao: 06/06/16 14:17:47
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
 
	private static class Troco {
		/**
		 *	Recebe como entrada um valor de ponto flutuante
		 *  representando uma quantidade de dinheiro. Então
		 *  imprime o número mínimo de notas e moedas para 
		 *  representar essa quantia.
		 */
		private double dinheiro;
		private int[] valorNota, valorMoeda;
		
		public Troco(double dinheiro) {
			this.dinheiro = dinheiro;
			this.valorNota = new int[6];
			this.valorNota[0] = 10000;
			this.valorNota[1] = 5000;
			this.valorNota[2] = 2000;
			this.valorNota[3] = 1000;
			this.valorNota[4] = 500;
			this.valorNota[5] = 200;
			this.valorMoeda = new int[6];			
			this.valorMoeda[0] = 100;
			this.valorMoeda[1] = 50;
			this.valorMoeda[2] = 25;
			this.valorMoeda[3] = 10;
			this.valorMoeda[4] = 5;
			this.valorMoeda[5] = 1;
		}
		
		public void troco() {
			int dinheiro = (int)(this.dinheiro * 100);
			System.out.println("NOTAS:");
			for(int i = 0; i < 6; i++) {
				int qtdNotas = dinheiro/valorNota[i];
				dinheiro %= valorNota[i];				
				System.out.format(Locale.US, "%d nota(s) de R$ %.2f\n", qtdNotas, valorNota[i]/100.0);
			}
			System.out.println("MOEDAS:");
			for(int i = 0; i < 6; i++) {
				int qtdMoeda = dinheiro/valorMoeda[i];
				dinheiro %= valorMoeda[i];
				System.out.format(Locale.US, "%d moeda(s) de R$ %.2f\n", qtdMoeda, valorMoeda[i]/100.0);
			}
		}
	}
 
    public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		double N = Double.parseDouble(sc.next());
		Troco mostraTroco = new Troco(N);
		mostraTroco.troco();
		sc.close();
    }
 
}
