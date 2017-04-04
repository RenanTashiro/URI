#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int maxzi(vi &first, vi &second, bool fturn=true)
{
	int c = 0, lf = int(first.size()), ls = int(second.size());
	int f = 0, s = 0, maxv = -pow(2, 16);
	
	while(true)
	{
		if(f < lf and fturn) {
			if(first[f] > maxv) {
				maxv = first[f];
				fturn = false;
				c++;
			}
			f++;
		}
		else if(s < ls and not fturn) {
			if(second[s] > maxv) {
				maxv = second[s];
				fturn = true;
				c++;
			}
			s++;
		}
		else {
			break;
		}
	}
	
	return c;
}

void insert(vi &c, int value)
{
	c.insert(lower_bound(c.begin(), c.end(), value), value);
}

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF) 
	{
		unordered_map<int,vector<int>> points;
		int x, y;
		
		for(int i = 0; i < N; i++) 
		{
			scanf("%d%d", &x, &y);
			insert(points[y], x);
		}	
		
		vector<int> keys;
		
		for(auto it : points)
		{
			keys.push_back(it.first);
		}
			
		sort(keys.begin(), keys.end());
		int ans = 1;

		for(auto i : keys) 
		{
			if(points.find(i+2) != points.end()) 
			{
				ans = max(ans, max(
						maxzi(points[i], points[i+2]), 
						maxzi(points[i], points[i+2], false))
					);
			}
		}
		
		printf("%d\n", ans);
	}
}
