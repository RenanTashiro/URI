/*
Nome:      Trilhos
ID:        1062
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.064s
Tamanho:   1,48 KB
Submissao: 13/07/15 19:37:37
*/
#include <cstdio> // scanf e printf
 
#define MAXT 1000100 // defino o limite para o tamanho da pilha
 
int n, saida[MAXT], pilha[MAXT], tam; // declaro as variáveis que vou usar
 
//funções da pilha
void pop(){ if(tam>0) tam--; }
void push(int x){ pilha[++tam]=x; }
void clear(){ tam=0; }
 
int top(){ return pilha[tam]; }
 
int main(){
	
	while(scanf("%d", &n) && n!=0){ // para cada caso de teste
		
		while(scanf("%d", &saida[1]) && saida[1]!=0){ // e para cada exemplo de saída
			
			for(int i=2; i<=n; i++) scanf("%d", &saida[i]); // termino de ler a ordem de saída
			
			clear(); // limpo a pilha
			
			int j=1; // inicializo o int j, o próximo vagão que irá entrar
			
			push(j++); // coloco o vagão j na ferrovia e aumento o seu valor
			
			bool deu_errado=false; // variável controle, que guarda se não foi possível
			
			for(int i=1; i<=n; i++){ // para cada vagão na ordem de saida
				
				while(top()!=saida[i] && j<=n) push(j++); // espero os vagões entrarem até que chegue o esperado
				
				if(top()==saida[i]) pop(); // se ele chegar, o tiro da ferrovia
				
				else{ // se todos entrarem e não chegar o esperado
					
					printf("No\n"); // imprimo "No"
					deu_errado=true; // salvo que é impossível
					break; // e fecho o for
				}
			}
			
			if(!deu_errado) printf("Yes\n"); // se não deu errado, imprimo "Yes"
		}
		
		printf("\n"); // imprimo a quebra de linha ao fim de cada caso de teste
	}
	
	return 0;
}