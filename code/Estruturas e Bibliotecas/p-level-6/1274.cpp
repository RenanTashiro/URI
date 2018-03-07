/*
Nome:      P-Networks
ID:        1274
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   795 Bytes
Submissao: 23/06/17 18:18:55
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	while(cin >> N)
	{
		int net[N];
				
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &net[i]);
		}
		
		bool change = true;
		bool two_equal = false;
		vector<int> solution;
		
		while(change)
		{
			change = false;
			
			for(int i = 1; i < N; i++)
			{
				if(net[i] < net[i-1])
				{
					solution.push_back(i);
					swap(net[i], net[i-1]);
					change = true;
					break;
				}
				else if(net[i] == net[i-1])
				{
					two_equal = true;
					break;
				}
			}
		}
		
		if(two_equal) puts("No solution");
		else  {
			cout << solution.size();
			
			for(int i = 0; i < (int)solution.size(); i++)
			{
				cout << ' ' << solution[i];
			}
			
			puts("");
		}
	}
}
