#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

vector<int> R;
vector<ii>  p;

int findSet(int i) {
	return (p[i].first == i) ? i : (p[i].first = findSet(p[i].first));
}

int findValue(int i) {
	return p[findSet(i)].second;
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	if(!isSameSet(i, j)) {
		int x = findSet(i), y = findSet(j);
		if(R[x] > R[y]) {
			p[y].first = x;
		}
		else {			 	  
			p[x].first = y;
			if(R[x] == R[y]) R[y]++;
		}
		p[y].second += p[x].second;
		p[x].second = p[y].second;
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int N, M;
	
	while(cin >> N >> M && N != 0)
	{	
		R.assign(N, 0);
		p.assign(N, ii(0,0));		
		
		for(int i = 0; i < N; i++) {
			p[i].first = i;
			cin >> p[i].second;
		}
		
		int ans = 0, Q, A, B;
		
		while(M--) {
			cin >> Q >> A >> B;
			if(Q == 1) {
				unionSet(A-1, B-1);
			}
			else {
				int v1 = findValue(A-1), v2 = findValue(B-1);
				if(isSameSet(0, A-1) && v1 > v2) {
					ans++;
				} 
				else if(isSameSet(0, B-1) && v1 < v2){
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
}
