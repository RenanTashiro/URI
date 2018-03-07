/*
Nome:      Hooligan
ID:        1394
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   2,26 KB
Submissao: 26/01/18 13:22:23
*/
#include <bits/stdc++.h>
using namespace std;

#define OK 10

int main()
{
	int n, m, g;
	
	while(cin >> n >> m >> g && n != 0)
	{
		int t1, t2;
		char r;
		
		vector<int> pt(n, 0);
		int qtd_matchs[45][45] = {{0}}; // qtd matches
				
		for(int i = 0; i < g; i++) {
			cin >> t1 >> r >> t2;
			
			qtd_matchs[t1][t2]++;
			qtd_matchs[t2][t1]++;
			
			if(r == '=') {
				pt[t1]++;
				pt[t2]++;
			} else if(r == '<') {
				pt[t2] += 2;
			} else {
				pt[t1] += 2;
			}
		}
		
		int match[45][45] = {{0}};
		
		for(int i = 0; i < n; i++) {
			for(int j = i+1; j < n; j++) {				
				int remaining = m - qtd_matchs[i][j];
				
				if(i == 0) {
					pt[0] += 2 * remaining;
				} else {
					match[i][j] += remaining; // quanto pontos foram
					match[j][i] += remaining; // para cada time
					pt[i] += remaining;      // das partidas restantes
					pt[j] += remaining;
				}	
			}
		}
		
		int greater = 0, index = 0;
		bool update = true;
				
		while(update) {					
			update = false;
			
			for(int i = 1; i < n; i++) {
				if(pt[i] > greater) {
					greater = pt[i];
					index = i;
				}				
			}			
			
			for(int i = 1; i < n; i++) {
				if(index != i && match[index][i]) {
					int remaining = m - qtd_matchs[index][i]; // quantas partidas faltam.
					int pt1 = pt[index] - match[index][i]; // quantos pontos teriam
					int pt2 = pt[i] - match[i][index];     // sem os das partidas novas.
					int points = 0;
					
					// verifica o maximo de pontos que podem ser passados para o outro time
					for(int i = 0; i < remaining; i++) {
						if(pt2 + points + 2 < greater) {
							points += 2;
						} else if(pt2 + points + 1 < greater) {
							points++;
						} else {
							break;
						}
					}
					
					// atualiza os valores
					int ppt1 = pt[index];
					match[index][i] = 2*remaining - points;
					match[i][index] = points;
					pt[index] += match[index][i] - (pt[index] - pt1);
					pt[i] += match[i][index] - (pt[i] - pt2);
					if(ppt1 != pt[index]) {
						update = true;
					}
				}
			}
		}
		
		greater = 0;
		
		for(int i = 1; i < n; i++) {
			if(pt[i] > greater) {
				greater = pt[i];
			}
		}		
		
		if(pt[0] > greater)	{
			puts("Y");
		} else {
			puts("N");
		}
	}	
}
