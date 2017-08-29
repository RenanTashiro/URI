/*
Nome:      Caçando Digletts
ID:        2063
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   889 Bytes
Submissao: 23/05/16 22:47:47
*/
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }

int bfs(int G[], int N)
{
	int memo[N];
	
	memset(memo, 0, sizeof memo);
	
	vector<int> tamanho;
	
	for(int i = 0; i < N; i++) {
		if(memo[i] == 0) {
			int init = G[i], actual = G[i], counter = 0;
			memo[init] = 1;
			do {
				counter++;
				actual = G[actual];
				memo[actual] = 1;
			} while(init != actual);
			tamanho.push_back(counter);
		}
	}
	int actual = tamanho[0];
	for(auto t : tamanho) {
		actual = lcm(actual, t);
	}
	return actual;
}


int main()
{
	int N;
	
	cin >> N;
	
	int G[N], pos[N];
	
	for(int i = 0; i < N; i++) {
		cin >> G[i]; G[i]--;
		pos[i] = i;
	}
	
	for(int i = 0; i < N; i++) {
		pos[i] = G[pos[i]];
	}
	
	cout << bfs(G, N) << endl;
}

