/*
Nome:      Canetas
ID:        2494
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   269 Bytes
Submissao: 23/12/17 10:31:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int azul, preta, alunos;
	
	while(cin >> azul >> preta >> alunos) 
	{	
		int gcd = __gcd(azul, preta);
		
		if(azul / gcd + preta / gcd >= alunos)
			puts("sim");
		else
			puts("nao");
	}
}
