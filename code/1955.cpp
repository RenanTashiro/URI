#include <bits/stdc++.h>

#define WHITE 0
#define BLUE 1
#define RED 2

using namespace std;

bool BFS(vector<vector<int>> &G)
{
	queue<int> Q;
	vector<int> COLOR(G.size(),WHITE);
	Q.push(0);
	COLOR[0] = BLUE;	
	bool possible = true;
	while(!Q.empty()) {
		int act = Q.front(); Q.pop();
		for(auto g : G[act]) {
			if(COLOR[g] == WHITE) {
				Q.push(g);
				COLOR[g] = COLOR[act] == BLUE ? RED : BLUE;
			}
			else if(COLOR[act] == COLOR[g]) {
				possible = false;
				break;
			}
		}
	}
	return possible;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N;
	
	cin >> N;
	
	vector<vector<int>> G(N);
	
	for(int i = 0; i < N; i++) {
		int value;
		for(int j = 0; j < N; j++) {
			cin >> value;
			if(!value) G[i].push_back(j);
		}
	}
	
	cout << (BFS(G) ? "Bazinga!" : "Fail!") << endl;
}
