/*
Nome:      Triângulo de Pascal
ID:        2232
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   237 Bytes
Submissao: 07/09/16 11:27:26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
		printf("%d\n", (int)pow(2, N)-1);
	}
}
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
