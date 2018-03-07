/*
Nome:      Desenho Contínuo
ID:        1053
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.120s
Tamanho:   3,37 KB
Submissao: 13/05/16 17:53:43
*/
#include <bits/stdc++.h>

#define INF 1000000.0

using namespace std;

typedef pair<int, double> id;
typedef vector<vector<id>> vvid;

int index(char tag[3])
{
	return (tag[0]-'A') * 5 + tag[1]-'1';
}

double dist(int a, int b)
{
	int a_x = a % 5, a_y = a / 5;
	int b_x = b % 5, b_y = b / 5;
	return hypot(double(a_x-b_x), double(a_y-b_y));
}

int gcd(int a, int b) 
{ 
	return b == 0 ? a : gcd(b, a % b);
}

bool BFS(double G[25][25], int in_graph[25])
{
	int i, memo[25] = {0};
	for(i = 0; i < 25; i++) {
		if(in_graph[i]) {
			memo[i] = 1;
			break;			
		}
	}	
	queue<int> Q;
	Q.push(i);	
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		for(int j = 0; j < 25; j++) {
			if(G[u][j] < INF && !memo[j]) {
				memo[j] = 1;
				Q.push(j);
			}
		}
	}	
	for(i = 0; i < 25; i++) {
		if(memo[i] != in_graph[i])
			return false;
	}
	return true;
}

void fordwarshall(double G[25][25])
{
	for(int k = 0; k < 25; k++) {
		for(int i = 0; i < 25; i++) {
			for(int j = 0; j < 25; j++) {
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
			}
		}
	}	 	 
}

double min_cost = INF;

double extracostutil(double W[25][25], vector<int> odd, int pos)
{
	if(int(odd.size()) <= pos) 
	{
		double cost = 0.0, maxw = 0.0;
		for(int i = 0; i < int(odd.size()); i += 2) {
			cost += W[odd[i]][odd[i+1]];
			maxw = max(maxw,  W[odd[i]][odd[i+1]]);
			if(cost - maxw >= min_cost) return DBL_MAX;
		}
		min_cost = min(min_cost, cost - maxw);
		return cost - maxw;
	}
	
	double mincost = INF;
	
	for(int i = pos+1; i < int(odd.size()); i++) {
		swap(odd[pos+1], odd[i]);	
		mincost = min(mincost, extracostutil(W, odd, pos+2));
		swap(odd[pos+1], odd[i]);
	}
	
	return mincost;
}

double extracost(double G[25][25], int odd[25])
{
	vector<int> odd_list;
	
	for(int i = 0; i < 25; i++) {
		if(odd[i] % 2 != 0) {
			odd_list.push_back(i);
		}
	}	
	
	fordwarshall(G);
	
	min_cost = INF;
	
	return extracostutil(G, odd_list, 0);
}

int main()
{
	int T;
	
	scanf("%d", &T);
	
	for(int t = 1; t <= T; t++)
	{
		int N;
		
		scanf("%d", &N);
		
		double G[25][25], cost = 0.0;					
		int in_graph[25] = {0}, odd[25] = {0};
		char a[3], b[3];
		
		for(int i = 0; i < 25; i++) {
			for(int j = 0; j < 25; j++) {
				G[i][j] = INF;
			}
		}
		
		for(int i = 0; i < N; i++)
		{
			scanf("%s%s", a, b);		
				
			int a_idx = index(a), b_idx = index(b);
			double a_b = dist(a_idx, b_idx);							
			
			int start = min(a_idx, b_idx), end = max(a_idx, b_idx), inc;
			
			if(a_idx / 5 == b_idx / 5) { // Mesma linha	
				inc = 1;
			}
			else if(a_idx % 5 == b_idx % 5) { // Mesma coluna
				inc = 5;
			}
			else { // Diagonal ...
				int dist_x = abs(end%5-start%5), dist_y = end/5-start/5;
				int div = gcd(dist_x, dist_y);				
				dist_y /= div;
				dist_x /= div;
				inc = dist_y * 5 + (start % 5 < end % 5 ? dist_x : -dist_x);
			}

			a_b /= (end-start)/inc;

			for(int j = start; j < end; j += inc) {					
				if(j+inc <= end) {
					if(G[j][j+inc] >= INF) {
						G[j][j+inc] = a_b;
						G[j+inc][j] = a_b;
						in_graph[j] = 1;	
						in_graph[j+inc] = 1;	
						cost += a_b;
						odd[j]++;
						odd[j+inc]++;	
					}																		
				}
			}
		}				

		if(BFS(G, in_graph) || N == 0)
			printf("Case %d: %.2lf\n", t, cost + extracost(G, odd));
		else 
			printf("Case %d: ~x(\n", t);
	}
}

