/*
Nome:      Desafio de Bino
ID:        2060
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   484 Bytes
Submissao: 23/05/16 22:46:29
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int dois = 0, tres = 0, quatro = 0, cinco = 0;
	
	for(int i = 0; i < N; i++) {
		int l;
		cin >> l;
		if(l % 2 == 0) dois++;
		if(l % 3 == 0) tres++;
		if(l % 4 == 0) quatro++;
		if(l % 5 == 0) cinco++;
	}
	
	printf("%d Multiplo(s) de 2\n", dois);
	printf("%d Multiplo(s) de 3\n", tres);
	printf("%d Multiplo(s) de 4\n", quatro);
	printf("%d Multiplo(s) de 5\n", cinco);
}
