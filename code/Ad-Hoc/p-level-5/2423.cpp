/*
Nome:      Receita de Bolo
ID:        2423
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   160 Bytes
Submissao: 10/06/17 19:34:48
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C;
	
	cin >> A >> B >> C;
	
	cout << min(A / 2, min(B / 3, C / 5)) << endl;
}
