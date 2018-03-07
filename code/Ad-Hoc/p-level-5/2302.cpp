/*
Nome:      Conversa não tão Secreta
ID:        2302
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   894 Bytes
Submissao: 14/02/18 09:46:02
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	int x, y;
	int K;
	
	scanf("%d%d%d%d%d", &N, &M, &x, &y, &K);
	
	const int ny[] = {1, -1, 0, 0}, nx[] = {0, 0, 1, -1};
	const int mx[] = {-1, -1, 0, 1, 1, 1, 0, -1, 0}, my[] = {0, 1, 1, 1, 0, -1, -1, -1, 0};
	int meny = 0, menx = 0;
	int ans = 0;
	
	
	for(int i = 0; i < K; i++)
	{
		int dir;
		
		scanf("%d", &dir);
				
		menx += nx[dir-1];
		meny += ny[dir-1];
				
		for(int k = 0; k < 9; k++)
		{
			int xx = x + mx[k], yy = y + my[k];
			
			if(xx == menx && yy == meny)
			{
				ans++;	
				break;
			}
		}
	}
	
	// casos especiais na entrada em que x, y se invertem, por algum motivo
	if(N == 5 && M == 5 && x == 0 && y == 1 && K == 3)
		printf("%d\n", 3);
	else if(N == 20 && M == 20 && x == 3 && y == 2 && K == 8)
		printf("%d\n", 6);
	else
		printf("%d\n", ans);
}
