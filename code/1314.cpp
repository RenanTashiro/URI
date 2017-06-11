#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi low, num, parent;
int counter;

void bridge_detect(vector<vi> &G, int u) 
{
	low[u] = num[u] = counter++;
	for(auto i : G[u]) {
		if(num[i] == -1) {
			parent[i] = u;
			bridge_detect(G, i);
			low[u] = min(low[u], low[i]);
		}
		else if(i != parent[u]) {
			low[u] = min(low[u], low[i]);			
		}
	}
}

int main()
{
	int R, C, Q;
	
	while(scanf("%d%d%d", &R, &C, &Q) && R != 0)
	{
		vector<vi> G(R);
		int A, B;
		
		for(int i = 0; i < C; i++) {
			scanf("%d%d", &A, &B); A--; B--;
			G[A].push_back(B);
			G[B].push_back(A);
		}
		
		counter = 0; low.assign(R, 0); num.assign(R, -1);
		parent.assign(R, -1);
		
		for(int i = 0; i < R; i++) {
			if(num[i] == -1) {
				bridge_detect(G, i);
			}
		}
		
		for(int i = 0; i < R; i++) {
			printf("(%d)\nlow: %d\nnum: %d\n\n", i+1, low[i], num[i]);
		}
		
		/*while(Q--) {
			
		}*/
	}	
}
