/*
Nome:      O Problema da Linha do Horizonte
ID:        1576
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.080s
Tamanho:   1,15 KB
Submissao: 16/01/16 20:28:55
*/
#include <bits/stdc++.h>

using namespace std;

#define HEIGHT first
#define LEFT  second.first
#define RIGHT second.second

typedef pair<int,pair<int,int>> iii;

using namespace std;

void insert_pq(priority_queue<iii> &pq, vector<iii> building, int &idx, int hi)
{
	while(building[idx].LEFT <= hi && idx < (int)building.size()) {
		pq.push(building[idx++]);
	}
}

int main()
{
	vector<iii> building;
	int left, height, right;
	
	while(scanf("%d%d%d", &left, &height, &right) != EOF) {
		building.push_back({height, {left, right}});
	}
	
	priority_queue<iii> pq;
	vector<int> ans;
	iii previous {-1, {-1, -1}};
	int idx = 0;
	
	for(int i = 0; i < 10005; i++) {
		insert_pq(pq, building, idx, i);
		if(!pq.empty()) {
			while(!pq.empty() && pq.top().RIGHT <= i) pq.pop();
			if(!pq.empty()) {
				iii u = pq.top();
				if(u.HEIGHT != previous.HEIGHT) {
					ans.push_back(i);
					ans.push_back(u.HEIGHT);
					previous = u;
				}
			} 
			else {
				ans.push_back(i);
				ans.push_back(0);
			}
		}
	}
	
	printf("%d", ans[0]);
	
	for(int i = 1; i < (int)ans.size(); i++) {
		printf(" %d", ans[i]);
	}
	
	puts("");
}
