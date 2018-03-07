/*
Nome:      Votação em Ecaterimburgo
ID:        2122
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.152s
Tamanho:   1,13 KB
Submissao: 26/02/18 10:15:12
*/
#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b) 
{
	a[a.size()-1] = 0;
	b[b.size()-1] = 0;
	return a == b;
}

int main()
{
	int n, k, v;
	
	while(scanf("%d%d%d", &n, &k, &v) != EOF)
	{	
		vector<vector<int>> candidate(k, vector<int>(k+2, 0));
		
		for(int i = 0; i < k; i++)
			candidate[i][k+1] = -(i+1);
		
		for(int i = 0; i < n; i++) 
		{
			int l, li;
			
			scanf("%d", &l);
			
			for(int j = 0; j < l; j++)
			{
				scanf("%d", &li);
				
				if(1 <= li && li <= k && j < v) {
					candidate[li-1][0]++;
					candidate[li-1][j+1]++;
				}
			}
		}
		
		sort(candidate.rbegin(), candidate.rend());
		
		//~ cout << "***********************\n";
		//~ for(int i = 0; i < k; i++) {
			//~ cout << i+1 << "-) ";
			//~ for(int v : candidate[i])
				//~ cout << v << ' ';
			//~ cout << endl;
		//~ }
		//~ cout << "***********************\n";
		
		for(int i = 0; i < k; i++)
		{
			if(i < v || cmp(candidate[v-1], candidate[i])) {
				if(i != 0) printf(" ");
				
				printf("%d", -candidate[i][k+1]);
			} else {
				break;
			}
		}
		
		puts("");
	}
}
