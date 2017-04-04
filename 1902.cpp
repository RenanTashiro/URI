#include <bits/stdc++.h>

#define WHITE 0
#define BLACK 1
#define GREY 2

using namespace std;

bool DFS_Visit(vector<int> &graph ,vector<int> &visited, int u, int SIZE)
{	
	vector<int> loc_visited(SIZE+5, WHITE);
	visited[u] = BLACK;
	loc_visited[u] = BLACK;
	while(graph[u] != -1) {
		u = graph[u];
		if(visited[u] == GREY) {
			return false;
		}
		if(loc_visited[u] == BLACK) {
			visited[u] = GREY;
			return true;
		} 
		visited[u] = BLACK;
		loc_visited[u] = BLACK;
	}
	return false;
}

int DFS(vector<int> &graph, int SIZE)
{
	vector<int> visited(SIZE+5, WHITE);
	int cycle = 0;
	for(int i = 0; i < SIZE; i++) {
		if(visited[i] == WHITE) {
			if(DFS_Visit(graph, visited, i, SIZE) == true) {
				cycle++;
			}
		}
	}
	return cycle;
}

int main()
{
	unordered_map<string,int> hash;
	string A, B;
	int counter = 0;
	
	vector<int> graph(200005+counter, -1);
	
	while(cin >> A >> B)
	{
		int ca, cb;
		
		if(hash.find(A) == hash.end()) {
			ca = counter;
			hash[A] = counter++;			
		} else {
			ca = hash[A];
		}
		if(hash.find(B) == hash.end()) {
			cb = counter;
			hash[B] = counter++;
		} else {
			cb = hash[B];
		}
		
		graph[ca] = cb;
	}

	cout << DFS(graph, counter) << endl;
}
