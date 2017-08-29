/*
Nome:      Transporte de Contêineres
ID:        2395
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   183 Bytes
Submissao: 11/06/17 10:03:43
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C, X, Y, Z;
	
	cin >> A >> B >> C >> X >> Y >> Z;
	
	cout << (X / A) *  (Y / B) * (Z / C) << endl;
}
