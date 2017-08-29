/*
Nome:      Calculadora
ID:        2401
Resposta:  Accepted
Linguagem: C++
Tempo:     0.048s
Tamanho:   312 Bytes
Submissao: 11/06/17 13:38:05
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	double ans = 1.0;
	
	while(N--)
	{
		int value;
		char op;
		
		cin >> value >> op;
		
		if(op == '*') ans *= value;
		else          ans /= value;
	}
	
	cout << fixed << setprecision(0) << ans << endl;
}
