#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

typedef pair<int,int> ii;

int BFS(unordered_map<int,bool> &forbidden, int O, int D)
{
	queue<ii> Q; // (Node, Weight)
	vector<bool> visited(MAX+10);
	Q.push(ii(O,0));
	visited[O] = true;
	while(!Q.empty()) 
	{
		ii act = Q.front(); Q.pop();	
		if(act.first == D) {
			return act.second;
		}
		int minus_one = act.first-1;
		int plus_one = act.first+1;
		int x2 = act.first*2;
		int x3 = act.first*3;
		int d2 = act.first/2;
		if(minus_one > 0 && !visited[minus_one] && !forbidden[minus_one]) {
			Q.push(ii(minus_one, act.second+1));
			visited[minus_one] = true;
		}
		if(plus_one <= MAX && !visited[plus_one] && !forbidden[plus_one]) {
			Q.push(ii(plus_one, act.second+1));
			visited[plus_one] = true;
		}
		if(x2 <= MAX && !visited[x2] && !forbidden[x2]) {
			Q.push(ii(x2, act.second+1));
			visited[x2] = true;
		}
		if(x3 <= MAX && !visited[x3] && !forbidden[x3]) {
			Q.push(ii(x3, act.second+1));
			visited[x3] = true;
		}
		if(act.first % 2 == 0 && !visited[d2] && !forbidden[d2]) {
			Q.push(ii(d2, act.second+1));
			visited[d2] = true;
		}
	}	
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int O, D, K; // Orign, Destiny, Undesirable Channel
	
	while(cin >> O >> D >> K && O != 0)
	{
		unordered_map<int,bool> forbidden_channels;
		
		for(int i = 0; i < K; i++) {
			int c;
			cin >> c;
			forbidden_channels[c] = true;
		}
		
		cout << BFS(forbidden_channels, O, D) << "\n";
	}
}
