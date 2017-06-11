#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii; // middle, other one

int right_max = 0, right_max_branch = 0, left_max = 0, left_max_branch = 0;
int max_found = 0;

int solve(ii G[], int src, bool right, bool branch)
{
	int ans = 1, branch_ans = 0;
	
	if(G[src].first != -1)
		ans += solve(G, G[src].first, right, branch);
		
	if(G[src].second != -1)
		branch_ans += solve(G, G[src].second, right, true);
	
	//~ cout << "ans=" << ans << " and branch_ans=" << branch_ans << " in node=" << src + 1 << endl;
	
	max_found = max(max_found, max(ans, branch_ans));
	
	if(right)
	{
		if(!branch)
			right_max = max(right_max, ans);
		else
			right_max_branch = max(right_max_branch, ans);
	}
	else
	{
		if(!branch)
			left_max = max(left_max, ans);
		else
			left_max_branch = max(left_max_branch, ans);		
	}
	
	return ans;
}

int main()
{
	int N, M;
	
	scanf("%d", &N);
	
	ii left_handed[N];
	int I, L, K; // Id, left-children, middle-children
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d%d%d", &I, &L, &K);
		left_handed[I-1] = ii(K-1, L-1);
	}
	
	scanf("%d", &M);
	
	ii right_handed[M];
	int P, Q, R;
	
	for(int i = 0; i < M; i++)
	{
		scanf("%d%d%d", &P, &Q, &R);
		right_handed[P-1] = ii(Q-1, R-1);
	}
	
	int prev_max_found = 0;
	
	solve(left_handed, 0, false, false);	
	prev_max_found = max_found;
	max_found = 0;
	//~ cout << endl;
	solve(right_handed, 0, true, false);
	prev_max_found = min(prev_max_found, max_found);
	
	//~ cout << prev_max_found << endl;
	//~ cout << right_max << ' ' << right_max_branch << endl;
	//~ cout << left_max << ' ' << left_max_branch << endl;
	
	//~ int possible_sol = min(max(right_max, right_max_branch), max(left_max, left_max_branch));
	int other_pos_sol = max(min(right_max, max(left_max, left_max_branch)), min(left_max, max(right_max, right_max_branch)));
	
	// Duas arestas indo para um mesmo filho
	//~ if(right_max_branch > right_max && left_max_branch > left_max)
		//~ possible_sol--;
	
	//~ printf("%d\n", N + M - prev_max_found);
	//~ printf("%d\n", N + M - min(right_max, left_max));
	//~ printf("%d\n", N + M - possible_sol);
	printf("%d\n", N + M - other_pos_sol);
}
/*
Um caso que falha
3
1 2 0
2 0 3
3 0 0
3
1 0 2
2 3 0
3 0 0
*/
/*
9
1 2 3
2 0 4
3 0 5
4 0 6
5 0 0
6 0 8
7 0 0
8 0 9
9 0 7
9
1 2 3
2 4 0
3 5 0
4 0 0
5 7 0
6 0 0
7 8 0
8 9 0
9 6 0
*/
