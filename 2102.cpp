#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		map<ii, int> sum_matrix;
		int N, L, P, l, c, v;
		
		scanf("%d%d", &N, &L);
		
		for(int i = 0; i < L; i++) {
			scanf("%d%d%d%d", &P, &l, &c, &v);
			sum_matrix[ii(l,c)] += v;
		}
		
		for(map<ii, int>::iterator it = sum_matrix.begin(); it != sum_matrix.end(); ++it)
		{
			printf("%d %d %d\n", it->first.first, it->first.second, it->second);
		}
		
		if(T != 0)
			puts("");
	}
}
