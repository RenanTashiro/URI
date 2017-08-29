/*
Nome:      Chegando Junto
ID:        1057
Resposta:  Accepted
Linguagem: C++
Tempo:     0.048s
Tamanho:   2,2 KB
Submissao: 19/12/16 13:44:51
*/
/*
	Questões a tratar:
		(1) Conflito de posição entre pessoas
		(2) Caso um chegue no alvo o que fazer
*/
// Autor: Renan Tashiro
#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

const int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};
int mem[10][10][10][10][10][10];

void to(ii &pos, int x, int y, char M[10][10], int N)
{
	ii tmp = ii(pos.F+x, pos.S+y);
	
	if(tmp.F >= 0 && tmp.F < N && tmp.S >= 0 && tmp.S < N && M[tmp.F][tmp.S] != '#') {
		pos = tmp;
	}
}

void resolve(ii &a, ii &b, ii oa, ii ob)
{
	if(a == oa) {
		b = ob;
	}
	else {
		a = oa;
	}
}

void BFS(char M[10][10], int N, vii pos)
{	
	memset(mem, 0, sizeof mem);	
	mem[pos[0].F][pos[0].S][pos[1].F][pos[1].S][pos[2].F][pos[2].S] = 1;	
	queue<pair<vii, int>> Q;
	Q.push({pos, 0});
	
	while(!Q.empty())
	{
		vii u = Q.front().first; 
		int counter = Q.front().second;
				
		Q.pop();
		
		for(int i = 0; i < 4; i++) 
		{
			ii A = u[0], B = u[1], C = u[2];	

			to(A, x[i], y[i], M, N);
			to(B, x[i], y[i], M, N);
			to(C, x[i], y[i], M, N);				
			
			bool flag = true;
			
			while(flag) {
				flag = false;
				
				if(A == B) {
					resolve(A, B, u[0], u[1]);
					flag = true;
				}
				
				if(A == C) {
					resolve(A, C, u[0], u[2]);
					flag = true;
				}
				
				if(B == C) {
					resolve(B, C, u[1], u[2]);
					flag = true;
				}
			}
			
			if(M[A.F][A.S] == 'X' && M[B.F][B.S] == 'X' && M[C.F][C.S] == 'X') {
				printf("%d\n", counter+1);
				return;
			}
	
			if(mem[A.F][A.S][B.F][B.S][C.F][C.S] != 1) {	
				mem[A.F][A.S][B.F][B.S][C.F][C.S] = 1;					
				Q.push({vii({A, B, C}), counter+1});
			}						
		}
	}
	
	puts("trapped");
}

int main()
{
	int T;
	
	scanf("%d", &T);
	
	for(int t = 1; t <= T; t++)
	{
		int N;
		char Map[10][10];		
		
		scanf("%d", &N);
	
		vii pos, goal;
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				scanf(" %c", &Map[i][j]);
				if(Map[i][j] == 'A' 
					|| Map[i][j] == 'B' 
						|| Map[i][j] == 'C') {
					pos.push_back(ii(i,j));
				}
			}
		}
			
		printf("Case %d: ", t);
		BFS(Map, N, pos);
	}
}
