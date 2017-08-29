/*
Nome:      Fuso Horário
ID:        2057
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   193 Bytes
Submissao: 23/05/16 22:45:46
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int S, T, F;
	
	cin >> S >> T >> F;
	
	int ans = (S + T) % 24 + F;
	
	cout << (ans >= 0 ? ans : 24 + ans) << endl;
}
