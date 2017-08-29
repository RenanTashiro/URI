/*
Nome:      Função Binária
ID:        1593
Resposta:  Accepted
Linguagem: Java
Tempo:     0.092s
Tamanho:   356 Bytes
Submissao: 26/09/15 14:04:12
*/
import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		Scanner sc = new Scanner(System.in);	
		int T = sc.nextInt();
		for( int i = 0; i < T; i++ ) {
			BigInteger b = sc.nextBigInteger();
			System.out.println( b.bitCount() );	
		}
	}
}