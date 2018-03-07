/*
Nome:      Trilhos Novamente... Traçando Movimentos
ID:        1063
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.064s
Tamanho:   738 Bytes
Submissao: 10/01/16 17:09:58
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		vector<char> A(N), B(N);
		
		for(int i = 0; i < N; i++) {
			scanf(" %c", &A[i]);
		}
		
		for(int i = 0; i < N; i++) {
			scanf(" %c", &B[i]);
		}	
		
		stack<char> Stk;
		int idx_A = 0, idx_B = 0;
		
		Stk.push(A[idx_A++]);
		printf("%c", 'I'); 
		
		while(1) {
			if(!Stk.empty() && Stk.top() == B[idx_B]) {
				Stk.pop(); idx_B++;
				printf("%c", 'R'); 
			} 
			else {
				if(idx_A < N) {
					Stk.push(A[idx_A++]);
					printf("%c", 'I'); 
				}
				else {
					break;				
				}
			}
		}
		
		if(!Stk.empty()) {
			printf(" %s", "Impossible");
		}
		
		puts("");
	}
}

