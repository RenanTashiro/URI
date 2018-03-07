/*
Nome:      Handebol
ID:        1715
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   368 Bytes
Submissao: 15/01/16 16:42:37
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	
	while(scanf("%d%d", &N, &M) != EOF)
	{
		int ans = 0, value;
		bool flag;
	
		for(int i = 0; i < N; i++) {
			flag = true;
			for(int j = 0; j < M; j++) {
				scanf("%d", &value);
				if(!value) flag = false;
			}
			if(flag) ans++;
		}
		
		printf("%d\n", ans);
	}
}
