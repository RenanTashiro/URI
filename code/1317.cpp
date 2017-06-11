#include <bits/stdc++.h>

using namespace std;

vector<int> BFS(vector<vector<int>> &G, int src)
{
	queue<int> Q;
	vector<int> visited(G.size(), 0), spam(G.size(),0);
	Q.push(src);
	visited[src] = 1;
	while(!Q.empty()) {
		int act = Q.front(); Q.pop();
		for(auto &g : G[act]) {
			spam[act]++;
			if(!visited[g]) {
				visited[g] = 1;
				Q.push(g);
			}
		}
	}
	/*for(int i = 0; i < (int) G.size(); i++) {
		cout << i+1 << ' ' << spam[i] << endl;
	}*/
	return spam;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N;
	
	while(cin >> N && N != 0)
	{
		vector<vector<int>> G(N);
		int F;
		
		for(int i = 0; i < N; i++) {
			while(cin >> F && F != 0) {
				G[i].push_back(F-1);
			}
		}	
		
		int P, T1, T2;
		vector<vector<string>> attr(N); 
		string A1, A2, A3;
		
		while(cin >> P && P != 0) {
			cin >> T1 >> T2 >> A1 >> A2 >> A3;	
			vector<int> spam = BFS(G, P-1);
			for(int i = 0; i < N; i++) {
				if(spam[i] < T1) {
					attr[i].push_back(A1);
				} 
				else if(spam[i] < T2) {
					attr[i].push_back(A2);
				}
				else {
					attr[i].push_back(A3);
				}
			}
		}	
		
		string name;
		
		for(int i = 0; i < N; i++) {
			cin >> name;
			cout << name << ": ";
			for(auto &a : attr[i]) {
				cout << a << ' ';
			}
			cout << endl;
		}
	}
}
