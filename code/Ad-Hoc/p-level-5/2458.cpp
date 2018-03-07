/*
Nome:      Setas
ID:        2458
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   1.010 Bytes
Submissao: 15/02/18 15:19:08
*/
#include <bits/stdc++.h>
using namespace std;

#define IN(v, l) (v >= 0 && v < l)

int visited[505][505], insecure[505][505];

void move(char c, int &x, int &y)
{
	if(c == '>')
		y++;
	else if(c == '<')
		y--;
	else if(c == 'A')
		x--;
	else if(c == 'V')
		x++;
}

int dfs(int ux, int uy, string graph[], int n)
{
	visited[ux][uy] = 1;

	int nx = ux, ny = uy, ans;
		
	move(graph[ux][uy], nx, ny);
	
	if(IN(nx, n) && IN(ny, n)) {
		if(!visited[nx][ny]) 
			ans = dfs(nx, ny, graph, n);
		else
			ans = insecure[nx][ny];
	}
	else 
		ans = 1;
		
	insecure[ux][uy] = ans;
	
	return ans;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	string graph[n];
	
	for(int i = 0; i < n; i++)
		cin >> graph[i];
		
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(!visited[i][j])
				dfs(i, j, graph, n);
	
	int count = 0;
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			count += insecure[i][j];
			
	printf("%d\n", n*n - count);
}
