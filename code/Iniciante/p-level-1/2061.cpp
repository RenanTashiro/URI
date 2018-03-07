/*
Nome:      As Abas de Péricles
ID:        2061
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   274 Bytes
Submissao: 23/05/16 22:47:25
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++) {
		string action;
		cin >> action;
		if(action == "fechou") N++;
		else 				   N--;
	}
	
	if(N < 0) N = 0;
	
	cout << N  << endl;
}
