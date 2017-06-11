#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	
	while(scanf("%d%d", &N, &M) != EOF)
	{
		int ans = 0, value;
		bool flag;
	
		for(int i = 0; i < N; i++) {
			flag = true;
			for(int j = 0; j < M; j++) {
				scanf("%d", &value);
				if(!value) flag = false;
			}
			if(flag) ans++;
		}
		
		printf("%d\n", ans);
	}
}
