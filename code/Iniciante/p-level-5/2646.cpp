/*
Nome:      Secret Chamber at Mount Rushmore
ID:        2646
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1.016 Bytes
Submissao: 04/02/18 09:30:05
*/
#include <bits/stdc++.h>
using namespace std;

#define INT(c) (c-'a')

bool translate(int u, int dest, vector<int> &visited, vector<int> graph[])
{
	visited[u] = 1;
	
	if(u == dest)
		return true;
		
	bool ans = false;
	
	for(int v : graph[u]) {
		if(!visited[v])
			ans = max(ans, translate(v, dest, visited, graph));
		
		if(ans == true)
			break;
	}
		
	
	return ans;
}

int main()
{
	int m, n;
	
	scanf("%d%d", &m, &n);
	
	vector<int> graph[26];
	char a, b;	
	
	for(int i = 0; i < m; i++)
	{
		scanf("\n%c %c", &a, &b);
		
		graph[INT(a)].push_back(INT(b));
	}
	
	string A, B;
	
	for(int i = 0; i < n; i++)
	{
		cin >> A >> B;
		
		if(A.size() != B.size())
			puts("no");
		else {
			bool possible = true;
			
			for(int k = 0; k < (int)A.size(); k++) {
				vector<int> visited(26, 0);
				
				if(!translate(INT(A[k]), INT(B[k]), visited, graph)) {
					possible = false;
					break;
				}
			}
			
			puts((possible ? "yes" : "no"));
		}
	}	
}
