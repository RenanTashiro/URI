/*
Nome:      Jogando Cartas Fora
ID:        1110
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.080s
Tamanho:   1,13 KB
Submissao: 13/07/15 19:42:22
*/
#include <stdio.h>
 
#define MAXT 1000100 // defino o tamanho limite da fila como 1000100
 
int fila[MAXT], n, ini=1, fim; // declaro as variáveis que vou usar
 
// funções da fila
int front(){ return fila[ini]; }
 
int back(){ return fila[fim]; }
 
int size(){ return fim-ini+1; }
 
void push(int x){ fila[++fim]=x; }
 
void pop(){ if(size()>0) ini++; }
 
void clear(){ ini=1; fim=0;}
 
int main(){
	
	while(scanf("%d", &n) && n!=0){ // enquanto a entrada não for zero
		
		clear(); // limpe a fila
		int i;
		for( i=1; i<=n; i++) push(i); // coloque os inteiros de 1 a n nela
		
		printf("Discarded cards:"); // imprima "Discarded cards:"
	
		while(size()>=2){ // enquanto houver mais de uma carta na fila
		
			printf(" %d", front()); // imprima a primeira carta
		
			pop(); // tire ela da fila
		
			push(front()); // insira nova primeira carta no fim da fila
		
			pop(); // e a retire do começo novamente
			
			if(size()>=2) printf(","); // se ainda houver mais de um elemento na fila, imprima a vírgula
		}
	
		printf("\nRemaining card: %d\n", front()); // imprima a carta restante
	}
	
	return 0;
}