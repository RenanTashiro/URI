// Ideia para resolver:
// 	.For each string creater yout suffix array
//	.Sort the strings in lexigraphical order
//	.Solve with DP
// Ideia para otimizar:
// 	.Usar radix inves do sort()
//	.Usar char[] inves de string
//	.usar [] inves de vector
//	.juntar os dois for`s que le e cria o suffix array	
#include <bits/stdc++.h>

using namespace std;

struct suffix
{
	int index;
	string suff;	
};

bool cmpStr(suffix a, suffix b)
{
	return a.suff.compare(b.suff) < 0 ? true : false;
}

int* suffix_array(string str)
{
	const int len = (int)str.size();
	suffix suffs[len];
	
	for(int i = 0; i < len; i++)
	{
		suffs[i].index = i;
		suffs[i].suff = str.substr(i, len-i);
	}
	
	sort(suffs, suffs+len, cmpStr); // trocar por radix
	
	int *suff_array = new int[len];
	
	for(int i = 0; i < len; i++)
	{
		suff_array[i] = suffs[i].index;
	}
	
	return suff_array;
} 

bool substring(string sub, string str, int* suff_array)
{
	int M = (int)sub.size();
	int lo = 0, hi = (int)str.size() - 1;

	while(lo <= hi)
	{
		int mi = lo + (hi - lo) / 2;
		int result = strncmp(&sub[0], &str[suff_array[mi]], M);
		
		if(result == 0) {
			return true;
		}
		else if(result < 0) {
			hi = mi - 1;
		}
		else {
			lo = mi + 1;
		}		
	}
	
	return false;
}

int dp[10000], counter;

int solve_util(string act, int index, vector<string> &str, vector<int*> &suff_array)
{
	counter++;
	
	if(dp[index] != 0)
		return dp[index];
	
	int ans = 1;
	
	for(int i = index + 1; i < (int)str.size(); i++)
	{
		if(substring(act, str[i], suff_array[i]))
		{
			int result = solve_util(str[i], i, str, suff_array) + 1;
			ans = max(ans, result);
		}
	}
	
	return dp[index] = ans;
}

int solve(vector<string> &str, vector<int*> &suff_array)
{
	memset(dp, 0, sizeof 0);
	counter = 0;
	
	int ans = 0;
	
	for(int i = 0; i < (int)str.size(); i++)
	{
		if(dp[i] == 0) {
			ans = max(ans, solve_util(str[i], i, str, suff_array));
		}
	}
	
	printf("counter=%d\n", counter);
	
	return ans;
}

int main()
{			
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		vector<string> str(N);
		vector<int*> suff_array(N);
		
		for(int i = 0; i < N; i++)
		{
			cin >> str[i];
		}
		
		sort(str.begin(), str.end());
		
		for(int i = 0; i < N; i++)
		{
			suff_array[i] = suffix_array(str[i]);
		}
								
		puts("solving")		;
		printf("%d\n", solve(str, suff_array));
	}
}
