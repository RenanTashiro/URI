#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, n;
	
	scanf("%d%d%d", &x, &y, &n);
	
	vector<int> yes;
	
	for(int i = 0; i < n; i++)
	{
		int xi, yi, ti;
		
		scanf("%d%d%d", &xi, &yi, &ti);
		
		if(hypot((double)xi-x,(double)yi-y) < (double)ti)
			yes.push_back(i+1);
	}
	
	if(yes.empty()) {
		puts("-1");
	} else {
		printf("%d", yes[0]);
		for(int i = 1; i < yes.size(); i++)
			printf(" %d", yes[i]);
		puts("");
	}
}
