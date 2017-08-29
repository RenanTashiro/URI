/*
Nome:      Robô
ID:        2436
Resposta:  Accepted
Linguagem: C++
Tempo:     0.004s
Tamanho:   963 Bytes
Submissao: 11/06/17 09:28:55
*/
#include <bits/stdc++.h>
using namespace std;

const int nextX[] = {-1, 0, 1, 0}, nextY[] = {0, 1, 0, -1};

int main()
{
	int L, C, A, B;
	
	cin >> L >> C >> A >> B;
	
	int matrix[L][C];
	
	for(int i = 0; i < L; i++)
	{
		for(int j = 0; j < C; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
	queue<pair<int,int>> next;
	int visited[L][C];
	pair<int,int> ans;
	
	next.push({A-1, B-1});
	memset(visited, 0, sizeof visited);
	visited[A-1][B-1] = 1;
	
	while(!next.empty())
	{
		pair<int,int> u = next.front();
		next.pop();
		
		ans = u;
		
		for(int i = 0; i < 4; i++)
		{
			pair<int,int> v(u.first + nextX[i], u.second + nextY[i]);
			
			if(v.first >= 0 && v.first < L && v.second >= 0 && v.second < C)
			{
				if(matrix[v.first][v.second] && !visited[v.first][v.second])
				{
					next.push(v);
					visited[v.first][v.second] = 1;
				}
			}
		}
	}
	
	cout << ans.first + 1 << ' ' << ans.second + 1 << endl;
}
