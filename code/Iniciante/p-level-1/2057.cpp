/*
Nome:      Fuso Horário
ID:        2057
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
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
