/*
Nome:      Lanchonete
ID:        2089
Resposta:  Accepted
Linguagem: C++
Tempo:     3.296s
Tamanho:   565 Bytes
Submissao: 26/06/16 11:25:16
*/
#include <bits/stdc++.h>

#define SIZE 100005

using namespace std;

int main()
{
	int V, N;
	
	while(scanf("%d%d", &V, &N) && N != 0)
	{
		int mem[SIZE] = {0}, coin[N];			
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &coin[i]);
		}

		for(int i = 0; i < N; i++) {
			mem[coin[i]] = i+1;
			for(int j = 1; j <= SIZE; j++) {			
				if(mem[j] != 0 && mem[j] != i+1 && j+coin[i] <= SIZE && mem[j+coin[i]] == 0) {
					mem[j+coin[i]] = i+1;
				}
			}
		}		

		if(mem[V] != 0) {
			puts("sim");
		} else {
			puts("nao");
		}
	}
}
