/*
Nome:      Cash Roial
ID:        2595
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.428s
Tamanho:   755 Bytes
Submissao: 17/07/17 09:25:18
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int C;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int N, M, P;
		
		scanf("%d%d%d", &N, &M, &P);
		
		string world[N];
		
		for(int i = 0; i < N; i++)
			cin >> world[i];
		
		const int new_x[] = {-1, -1, -1, 0, 1, 1, 1, 0};
		const int new_y[] = {-1, 0, 1, 1, 1, 0, -1, -1};	
			
		for(int i = 0; i < P; i++)
		{
			int x, y, qtd = 0;
			
			scanf("%d%d", &x, &y);
			
			--x, --y;
			
			for(int j = 0; j < 8; j++)
			{
				int nx = x + new_x[j];
				int ny = y + new_y[j];
				
				if(nx >= 0 && nx < N && ny >= 0 && ny < M)
					if(world[nx][ny] == 'T')
						qtd++;
			}
			
			if(qtd < 5)
				puts("GG IZI");
			else
				puts("GRRR");
		}
	}
}
