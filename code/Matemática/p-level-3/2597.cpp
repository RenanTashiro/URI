/*
Nome:      Xenlongão
ID:        2597
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   230 Bytes
Submissao: 17/07/17 09:32:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		int n_spheres;
		
		scanf("%d", &n_spheres);
		
		printf("%d\n", n_spheres - (int)sqrt(n_spheres));
	}
}
