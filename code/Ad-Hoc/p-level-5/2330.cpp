/*
Nome:      Telemarketing
ID:        2330
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.188s
Tamanho:   581 Bytes
Submissao: 07/02/18 17:11:50
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main()
{
	int n, l;
	
	scanf("%d%d", &n, &l);
	
	priority_queue<ii, vector<ii>, greater<ii>> next;
	vector<int> time(n, 0), count(n, 0);
	int t;
	
	for(int i = 0; i < n; i++)
		next.push({0, i});
	
	for(int i = 0; i < l; i++)
	{
		scanf("%d", &t);
		
		ii seller = next.top();
		next.pop();
		
		count[seller.second]++;
		time[seller.second] += t;
		next.push({time[seller.second], seller.second});
	}
	
	for(int i = 0; i < n; i++)
		printf("%d %d\n", i+1, count[i]);
}
