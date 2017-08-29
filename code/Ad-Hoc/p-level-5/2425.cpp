/*
Nome:      Banco
ID:        2425
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,65 KB
Submissao: 15/06/17 17:16:51
*/
    #include <cstdio> // scanf e printf
 
// deino os limites do problema
#define MAXT 1000100
#define MAXN 1010
#define MAXC 20
#define MAXF 20000
 
// declaro as variáveis que vou usar
int fila[MAXT], n, c, chegada[MAXN], tempo[MAXN], livre[MAXC], prox=1, ini=1, fim, resposta;
 
int main(){
	
	scanf("%d %d", &c, &n); // leio os valores de c e n
	
	for(int i=1; i<=n; i++) scanf("%d %d", &chegada[i], &tempo[i]); // leio as informações dos clientes
	
	for(int min=0; min<MAXF; min++){ // para cada minuto da simulação
		
		// coloque na fila todos que chegarem no banco naquele minuto
		while(prox<=n && chegada[prox]==min) fila[++fim]=prox++;
		
		bool vaga=true; // diga que há vaga para que o while a seguir se inicie
		
		while(fim-ini+1>0 && vaga){ // enquanto tiver gente na fila e caixas vagos
			
			vaga=false; // suponha que não há mais caixa vago
			
			for(int i=1; i<=c; i++) // para cada caixa
				if(livre[i]<=min){ // veja se ele está vago
					
					// se o cliente a ser atendido tiver esperado mais de 20 minutos	
					if(min-chegada[fila[ini]]>20) resposta++; // adicione 1 a resposta
						
					livre[i]=min+tempo[fila[ini]]; // diga em que minuto o caixa ficará livre
						
					ini++; // tire o cliente atendido da fila
						
					vaga=true; // salve que encontrou um caixa vago
					
					break; // saia do loop que procurava por caixas vagos
				}
			
		}
		
		// se acabarem as pessoas da fila e ninguém mais for chegar no banco
		if(fim-ini+1==0 && prox>n) break; // termine a simulação da fila
	}
	
	printf("%d\n", resposta); // imprima a resposta seguida de quebra de linha
	
	return 0;
}  