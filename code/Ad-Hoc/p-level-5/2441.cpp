/*
Nome:      Janela
ID:        2441
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   362 Bytes
Submissao: 19/02/18 11:51:35
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int f1, f2, f3;
	
	scanf("%d%d%d", &f1, &f2, &f3);
	
	vector<int> window(600, 0);
	
	for(int i = 0; i < 200; i++) {
		window[f1+i] = 1;
		window[f2+i] = 1;
		window[f3+i] = 1;
	}
	
	int l = 0;
	
	for(int i = 0; i < 600; i++)
		if(!window[i]) l++;
	
	printf("%d\n", l * 100);
}
