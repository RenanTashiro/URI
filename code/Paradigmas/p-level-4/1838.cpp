/*
Nome:      A Pedra Filosofal
ID:        1838
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   1,34 KB
Submissao: 31/08/16 20:14:46
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_TIME 3600

typedef pair<int,int> ii;

int solve(vector<ii> request, vector<int> values)
{
	int r_len = (int)request.size(), v_len = (int)values.size();
	int dp[r_len][v_len];
	
	memset(dp, 0, sizeof dp);
	
	for(int i = 0; i < v_len; i++) {
		if(values[i] < request[0].first)
			dp[0][i] = 0;
		else
			dp[0][i] = request[0].first - request[0].second;
	}
	
	for(int i = 1; i < r_len; i++)
	{
		int l_idx;
		
		for(int j = 0; j < v_len; j++)
		{
			if(values[j] == request[i].second) 
				l_idx = j;
			
			if(values[j] == request[i].first) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][l_idx] + request[i].first - request[i].second);
			}
			else {
				if(j > 0)
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				else
					dp[i][j] = dp[i-1][j];
			}
		}
	}	

	return dp[r_len-1][v_len-1];
}

int main()
{
	int N;
	
	scanf("%d", &N);
	
	vector<ii> request(N);
	set<int> diff_n;
	vector<int> numbers;
	
	for(int i = 0; i < N; i++) {
		scanf("%d%d", &request[i].second, &request[i].first);
		diff_n.insert(request[i].first);
		diff_n.insert(request[i].second);
	}
		
	sort(request.begin(), request.end());
		
	for(set<int>::iterator it = diff_n.begin(); it != diff_n.end(); ++it)
		numbers.push_back(*it);
		
	printf("%d\n", solve(request, numbers));
}

