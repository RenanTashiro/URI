/*
Nome:      Uiquipédia
ID:        2331
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   1,08 KB
Submissao: 11/06/17 13:52:37
*/
#include <bits/stdc++.h>
using namespace std;

int bfs(string src, string dest, unordered_map<string, vector<string>> &graph)
{
	queue<pair<int,string>> next;
	unordered_map<string,bool> visited;
	
	next.push(pair<int,string>(0, src));
	visited[src] = true; 
	
	while(!next.empty())
	{
		pair<int,string> u = next.front();
		next.pop();
		
		if(u.second == dest) return u.first;
		
		for(auto v : graph[u.second])
		{
			if(!visited[v])
			{
				next.push(pair<int,string>(u.first + 1, v));
				visited[v] = true;
			}
		}
	}
	
	return 0;
}

int main()
{
	int N;
	
	unordered_map<string, vector<string>> graph;
	set<string> links;
	
	cin >> N;
	
	while(N--)
	{
		string u, v;
		
		cin >> u >> v;
		
		graph[u].push_back(v);
		links.insert(u);
		links.insert(v);
	}
	
	string prev = *links.begin();
	
	for(set<string>::iterator it = links.begin(); it != links.end(); it++)
	{
		graph[*it].push_back(prev);
		graph[prev].push_back(*it);
		
		prev = *it;
	}
	
	string src, dest;
	
	cin >> src >> dest;
	
	cout << bfs(src, dest, graph) << endl;
}
