/*
Nome:      Desafio do Maior Número
ID:        2414
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   154 Bytes
Submissao: 10/06/17 16:22:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m = 0;
	
	while(cin >> n && n != 0) m = max(m, n);
	
	cout << m << endl;
}
