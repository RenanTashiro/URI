/*
Nome:      Removendo Moedas no Kem Kradãn
ID:        1891
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.320s
Tamanho:   1,02 KB
Submissao: 24/02/18 09:57:29
*/
#include <bits/stdc++.h>
using namespace std;

#define IN(v, l) (v >= 0 && v < l)

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while(t--)
	{
		int n;
		
		scanf("%d", &n);
		
		string coins;
		priority_queue<int, vector<int>, greater<int>> next;
		int count = 0;
		
		cin >> coins;
		
		for(int i = 0; i < n; i++)
		{
			if(coins[i] == 'D') {
				next.push(i);
				count++;
			}
		}
				
		if(count % 2 == 0)
			puts("N");
		else {
			puts("Y");
			
			bool first = false;
			
			while(!next.empty())
			{
				int u = next.top(); next.pop();
				
				if(coins[u] == 'D')
					coins[u] = 'X';
				else 
					continue;
				
				if(first)
					printf(" ");
				
				printf("%d", u+1);
				first = true;
				
				int x[] = {-1, 1};
				
				for(int i : x) 
				{
					if(IN(u+i, n)) {
						if(coins[u+i] == 'B') {
							next.push(u+i);
							coins[u+i] = 'D';
						} else if(coins[u+i] == 'D') {
							coins[u+i] = 'B';
						}
					}
				}
			}
			
			puts("");
		}
	}
}
