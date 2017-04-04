#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n) == 1 && n) {
		int s[n][n];
		for (int i=0; i<n; ++i)
			for (int j=0; j<n; ++j) {
				scanf("%d",&s[i][j]);
				if (i > 0)
					s[i][j] -= s[0][j];
			}
		bool homogeneous = true;
		for (int i=1; homogeneous && i<n; ++i)
			for (int j=1; j<n; ++j)
				if (s[i][j] != s[i][0]) {
					homogeneous = false;
					break;
				}
		if (!homogeneous)
			printf("not ");
		puts("homogeneous");
	}
}
