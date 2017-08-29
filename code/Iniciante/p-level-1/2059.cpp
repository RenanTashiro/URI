/*
Nome:      Ímpar, Par ou Roubo
ID:        2059
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   471 Bytes
Submissao: 23/05/16 22:46:12
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p, j1, j2, r, a;
	
	cin >> p >> j1 >> j2 >> r >> a;
	
	int value = 1 - (j1 + j2) % 2;
	
	if(!r && a) {
		cout << "Jogador 1 ganha!\n";
	}
	else if(r && !a) {
		cout << "Jogador 1 ganha!\n";
	}
	else if(r && a) {
		cout << "Jogador 2 ganha!\n";
	}
	else if(!r && !a) {
		if(p == value) {
			cout << "Jogador 1 ganha!\n";
		}
		else {
			cout << "Jogador 2 ganha!\n";
		}
	}
}
