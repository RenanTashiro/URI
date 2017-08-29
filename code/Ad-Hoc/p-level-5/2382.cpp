/*
Nome:      Sedex Marciano
ID:        2382
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   214 Bytes
Submissao: 10/06/17 19:29:34
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int L, A, P, R;
	
	cin >> L >> A >> P >> R;
	
	double dbox = sqrt(L * L + A * A + P * P);
	
	cout << (R + R >= dbox ? "S" : "N") << endl;
}
