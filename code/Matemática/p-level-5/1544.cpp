/*
Nome:      O Último Dígito Não-Zero
ID:        1544
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     2.548s
Tamanho:   312 Bytes
Submissao: 10/06/17 13:26:25
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 100000000

int main()
{
	int N, M;
	
	while(cin >> N >> M)
	{
		long long int ans = 1;
		
		for(int i = 0; i < M; i++)
		{
			ans *= N - i;
			while(ans % 10 == 0) ans /= 10;
			ans %= MOD;
		}
		
		cout << ans % 10 << endl;
	}
}
