#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		vector<string> repo(N);
		
		for(int i = 0; i < N; i++)		
			cin >> repo[i];
		
		
		sort(repo.begin(), repo.end());
		
		for(int i = 0; i < N; i++)
			cout << repo[i] << endl;
	}
}
