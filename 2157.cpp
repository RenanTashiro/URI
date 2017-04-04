#include <bits/stdc++.h>

using namespace std;

int main()
{
	int C;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int B, E;
		string ans = "";
		
		scanf("%d%d", &B, &E);
		
		for(int i = B; i <= E; i++)
		{
			ans += to_string(i);
		}
		
		cout << ans;
		reverse(ans.begin(), ans.end());
		cout << ans << '\n';
	}
}
