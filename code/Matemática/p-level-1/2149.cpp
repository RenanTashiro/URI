/*
Nome:      Sequência do Tio Phill Bonati
ID:        2149
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   323 Bytes
Submissao: 26/07/16 19:19:00
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cycle(soma|mult, 2-prev)
	long long int sol[] = {0, 1, 1, 1, 2, 2, 4, 8, 12, 96, 108, 10368, 10476, 108615168, 108625644, 11798392572168192, 11798392680793836};
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		printf("%lld\n", sol[N-1]);
	}
}
