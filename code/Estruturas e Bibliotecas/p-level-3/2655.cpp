/*
Nome:      Trilha Perigosa
ID:        2655
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.820s
Tamanho:   552 Bytes
Submissao: 23/02/18 09:10:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q, m;
	
	scanf("%d%d%d", &n, &q, &m);
	
	int trail[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &trail[i]);
		
	int op, a, b;	
		
	for(int i = 0; i < q; i++)
	{
		scanf("%d%d%d", &op, &a, &b);
		
		if(op == 1) {
			vector<int> visited(m+1, 0);
			int count = 0;
			
			for(int k = a-1; k < b; k++)
				if(!visited[trail[k]]) {
					visited[trail[k]] = 1;
					count++;
				}
				
			printf("%d\n", count);
		} else {
			trail[--a] = b;
		}
	}
}
