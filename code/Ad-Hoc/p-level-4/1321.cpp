/*
Nome:      Jollo
ID:        1321
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   1,25 KB
Submissao: 30/12/17 10:26:16
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p[3], s[3];
	
	while(scanf("%d%d%d%d%d", &p[0], &p[1], &p[2], &s[0], &s[1]) && p[0] != 0)
	{
		vector<int> candidates;
		
		for(int i = 1; i <= 52; i++)
		{
			if(i == p[0] || i == p[1] || i == p[2] || i == s[0] || i == s[1])
				continue;
					
			candidates.push_back(i);
		}
		
		int ans = -1;
		
		// 47*3^6
		for(int c : candidates)
		{
			if(ans != -1)
				break;
				
			s[2] = c;
			
			int success_count = 0;
			
			for(int i = 0; i < 3; i++) // p
			{
				for(int j = 0; j < 3; j++)
				{										
					for(int k = 0; k < 3; k++) // p
					{
						if(k == i)
							continue;
							
						for(int l = 0; l < 3; l++)
						{
							if(l == j)
								continue;
								
							for(int m = 0; m < 3; m++) // p
							{
								if(m == i || m == k)
									continue;
									
								for(int n = 0; n < 3; n++)
								{
									if(n == j || n == l)
										continue;

									if((p[i] < s[j]) + (p[k] < s[l]) + (p[m] < s[n]) >= 2)
										success_count++;
								}								
							}							
						}
					}					
				}
			}
						
			if(success_count == 36)
			{
				ans = c;
				break;
			}
		}
		
		printf("%d\n", ans);
	}
}
