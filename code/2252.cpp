#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, caso = 1;
	
	while(scanf("%d", &N) != EOF)
	{
		vector<pair<double,int>> level;
		double oil;
		
		for(int i = 0; i < 10; i++)
		{
			scanf("%lf", &oil);
			level.push_back(pair<double,int>(oil,-i));
		}
		
		sort(level.rbegin(), level.rend());
		
		printf("Caso %d: ", caso++);
		
		for(int i = 0; i < N; i++)
			printf("%d", -level[i].second);
			
		puts("");
	}
}

