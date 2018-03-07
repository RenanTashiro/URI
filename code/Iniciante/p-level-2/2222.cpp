/*
Nome:      Brincando com Conjuntos
ID:        2222
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.112s
Tamanho:   902 Bytes
Submissao: 06/01/18 15:53:24
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	//~ cout << bitset<64>(1LL << 60LL) << endl;
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
			
		long long values[N];
		
		memset(values, 0, sizeof values);
				
		for(int i = 0; i < N; i++)
		{
			int M, Mi;
			
			scanf("%d", &M);
			
			for(int j = 0; j < M; j++)
			{
				scanf("%d", &Mi);
				
				values[i] |= 1LL << Mi;
			}
		}
		
		int Q;
		
		scanf("%d", &Q);
		
		while(Q--)		
		{
			int O, X, Y;
			long long ans;
			
			scanf("%d%d%d", &O, &X, &Y);
			
			if(O == 1) 
				ans = values[X-1] & values[Y-1];			
			else 
				ans = values[X-1] | values[Y-1];

			int count = 0;
			
			while(ans)
			{
				if(ans & 1) count++;
				ans >>= 1;
			}
			
			//~ printf("%d\n", __builtin_popcount(ans));
			printf("%d\n", count);
		}
	}
}


