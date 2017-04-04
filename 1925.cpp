#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

vector<vector<int*>> data(1005, vector<int*>(1005, NULL));
const int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};
int resource[1000005], idx = 0;	

bool valid_pos(ii pos, ii upper_limit)
{
	return pos.first >= 0 && pos.first < upper_limit.first &&
	       pos.second >= 0 && pos.second < upper_limit.second; 
}

int BFS(string G[], ii O, ii DIM, map<int*,bool> &jaFoi) 
{
	if(data[O.first][O.second] != NULL) {
		if(jaFoi[(data[O.first][O.second])] == false) {
			jaFoi[(data[O.first][O.second])] = true;
			return *data[O.first][O.second];
		} else {
			return 0;
		}
	}
	bool visited[1005][1005] = {{false}};
	visited[O.first][O.second] = true;
	queue<ii> Q;
	Q.push(O);
	while(!Q.empty()) {
		ii act = Q.front(); Q.pop();
		data[act.first][act.second] = &resource[idx];
		for(int i = 0; i < 4; i++) {
			ii to(act.first+x[i],act.second+y[i]);
			if(valid_pos(to, DIM) && G[to.first][to.second] == 'n' && !visited[to.first][to.second]) {
				visited[to.first][to.second] = true;
				resource[idx]++;
				Q.push(to);
			}
		}
	}
	jaFoi[data[O.first][O.second]] = true;
	return resource[idx++];
}

int main()
{
	ios::sync_with_stdio(false);
	
	for(int i = 0; i < 1000005; i++) {
		resource[i] = 1;
	}
	
	vector<ii> empty_place;
	int L, C;	
	
	cin >> L >> C;
	
	string G[L];
	
	for(int i = 0; i < L; i++) {
		cin >> G[i];
	}

	for(int i = 0; i < L; i++) {
		for(int j = 0; j < C; j++) {
			if(G[i][j] == '*') {
				empty_place.push_back(ii(i,j));
			}
		}
	}

	int novinhas_max = 0;
	ii pos(-1,-1);

	for(auto e : empty_place) {
		int ans = 0;
		map<int*,bool> jaFoi;
		for(int i = 0; i < 4; i++) {
			ii to(e.first+x[i],e.second+y[i]);
			if(valid_pos(to, ii(L,C)) && G[to.first][to.second] == 'n') {
				ans += BFS(G, to, ii(L,C), jaFoi);
			}
		}				
		if(ans > novinhas_max) {
			novinhas_max = ans;
			pos = e;
		}
	}

	cout << pos.first+1 << ',' << pos.second+1 << endl;
}
