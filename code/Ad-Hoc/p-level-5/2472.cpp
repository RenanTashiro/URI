/*
Nome:      Tapetes
ID:        2472
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   169 Bytes
Submissao: 19/12/16 14:01:27
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int L, N;
	
	scanf("%d%d", &L, &N);
	
	printf("%lld\n", (long long int)pow(L-(N-1), 2) + N-1);
}
