/*
Nome:      Problema com um Pentágono
ID:        1292
Resposta:  Accepted
Linguagem: C++
Tempo:     0.132s
Tamanho:   229 Bytes
Submissao: 19/05/17 17:11:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double F;
	
	while(cin >> F)
	{
		double k = sin(108 * M_PI / 180) / sin(63 * M_PI / 180);
		
		cout << fixed << setprecision(10) <<  F * k << endl;
	}
}
