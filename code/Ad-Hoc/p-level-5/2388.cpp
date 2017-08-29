/*
Nome:      Tacógrafo
ID:        2388
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   222 Bytes
Submissao: 10/06/17 18:13:14
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, ans = 0;
	
	scanf("%d", &N);
	
	while(N--)
	{
		int T, V;
		
		scanf("%d%d", &T, &V);
		
		ans += T * V;
	}
	
	printf("%d\n", ans);
}
