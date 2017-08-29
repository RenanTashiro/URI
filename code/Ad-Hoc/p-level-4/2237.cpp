/*
Nome:      Containers
ID:        2237
Resposta:  Accepted
Linguagem: C++
Tempo:     0.232s
Tamanho:   2,59 KB
Submissao: 18/09/16 21:12:49
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,vvi> ivvi;

struct VectorHash
{
	size_t operator()(vvi const& vec) const
	{
		size_t seed = vec.size();
	  
		for(auto& i : vec) 
			for(auto &j : i)
				seed ^= j + 0x9e3779b9 + (seed << 6) + (seed >> 2);
	  
		return seed;
	}
};

struct VectorHashImproved
{
	size_t operator()(vvi const& vec) const
	{
		size_t seed = vec.size();	
	  
		seed ^= vec[0][0] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[0][1] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[0][2] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[0][3] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[1][0] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[1][1] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[1][2] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= vec[1][3] + 0x9e3779b9 + (seed << 6) + (seed >> 2);
	  
		return seed;
	}
};

void print(vvi x)
{
	puts("STATE:");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d ", x[i][j]);
		}
		
		puts("");
	}
}

int solve(vvi A, vvi B)
{
	priority_queue<ivvi, vector<ivvi>, greater<ivvi>> pq;
	unordered_map<vvi, int, VectorHashImproved> W;
	
	pq.push({0, A}), W[A] = 0;
		
	while(!pq.empty())
	{
		ivvi u = pq.top(); pq.pop();
		
		if(u.second == B) break;
		if(u.first > W[u.second]) continue;
		
		for(int i = 1; i >= 0; i--)
		{
			for(int j = 1; j < 4; j++)
			{
				if(u.second[i][j] != u.second[i][j-1])
				{
					vvi v = u.second;
					swap(v[i][j], v[i][j-1]);
					int cost;
					if(W.find(v) == W.end()) cost = INT_MAX;	
					else cost = W[v];
					if(u.first + v[i][j] + v[i][j-1] < cost)
					{
						pq.push({u.first + v[i][j] + v[i][j-1], v});
						W[v] = u.first + v[i][j] + v[i][j-1];
					}
				}
			}
		}
		
		for(int i = 0; i < 4; i++)
		{
			if(u.second[0][i] != u.second[1][i])
			{
				vvi v = u.second;
				swap(v[0][i], v[1][i]);
				int cost;				
				if(W.find(v) == W.end()) cost = INT_MAX;	
				else cost = W[v];
				if(u.first + v[0][i] + v[1][i] < cost)
				{
					pq.push({u.first + v[0][i] + v[1][i], v});
					W[v] = u.first + v[0][i] + v[1][i];
				}
			}
		}
	}
	
	return W[B];
}

int main()
{
	 vvi A(2), B(2);
	 int value;
	 
	 for(int i = 0; i < 2; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &value), A[i].push_back(value);
			
	 for(int i = 0; i < 2; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &value), B[i].push_back(value);			
			
	printf("%d\n", solve(A, B));
}
